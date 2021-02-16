//
// Created by jman9 on 2/10/2021.
//
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "runtime.h"
#include <time.h>

#ifdef WINDOWS
#include <windows.h>
#else
#include <unistd.h>
#include <algorithm>
#define Sleep(x) usleep((x)*1000)
#endif

#include "runtime.h"
#include <optional>

using namespace std;

runtime::runtime(){
    numFights = 0;
    points = 0;
    playerHealth = 10;
}

int runtime::getPlayerHealth() {
    return playerHealth;
}

int runtime::getPoints(){
    return points;
}

int runtime::getNumFights() {
    return numFights;
}

string runtime::pause() {
    string nothing;
    cout << "type \"cool\" to continue\n";
    cin >> nothing;
    replace(nothing.begin(), nothing.end(), ' ', 'a');
    return nothing;
}
//TODO: overload cout operator to output numPoints and numFights
int runtime::makeChoice(string c1, string c2, string c3, string prompt){
    string choice;
    cout << prompt << endl <<
        "A) " << c1 << endl <<
        "B) " << c2 << endl <<
        "C) " << c3 << endl;
    cin >> choice;
    //TODO: parse choice
    if (choice=="a")
        return 0;
    else if (choice=="b")
        return 1;
    else if (choice=="c")
        return 2;
    return 0;
}



int runtime::fight(int playerHealth, int enemyHealth){
    const int DAMAGE = 3;
    bool gameOver = false;
    cout << "You're in a fight!" << endl;
    //say time to fight!
    int AChoice = 0;
    int DChoice = 0;
    while(!gameOver){
        srand (time(nullptr));
        int enemyAttack = rand() % 2;
        int enemyMove = rand() % 2;
        AChoice = makeChoice("punch left","punch right","run");
        DChoice = makeChoice("dodge left","dodge right","don't dodge (damage x2)", "Would you like to dodge?");
        if (AChoice!=2){
            string PoutStringAt = (AChoice==0) ? "you swing left!\n" :"you swing right!\n" ;
            string PoutStringDod = (DChoice==0) ? "you dodge left!\n" :"you dodge right!\n" ;
            string EoutStringAt = (enemyAttack==0) ? "enemy attacks left!\n" :"enemy attacks right!\n" ;
            string EoutStringDod = (enemyMove==0) ? "enemy dodges left!\n" :"enemy dodges right!\n" ;
            if(DChoice !=2) {
                enemyHealth = (AChoice == enemyMove) ? enemyHealth - DAMAGE : enemyHealth;
                playerHealth = (DChoice == enemyAttack) ? playerHealth - DAMAGE : playerHealth;
            }
            else{
                enemyHealth = (AChoice == enemyMove) ? enemyHealth - 2*DAMAGE : enemyHealth;
                playerHealth =  playerHealth - DAMAGE;
            }
            cout << PoutStringAt << PoutStringDod << EoutStringAt << EoutStringDod << "Your health: " << playerHealth << "\nEnemy health: " << enemyHealth << endl;
        }
        else{
            cout <<"time to skedaddle!\n";
        }
        //rand number to decide which way enemy swings, and which way they dodge
        //use rand number based on accuracy to decide if hit, and then rand number based on strength to decide on damage.
        //make a time based button press game and do accuracy?
        //he punched _ you dodged _. you punched _ he dodged _. his health is _, your health is _
        if(playerHealth<=0 || enemyHealth<=0 || AChoice==2)
            gameOver = true;
    }
    cout << "battle over!\n";
    pause();
}