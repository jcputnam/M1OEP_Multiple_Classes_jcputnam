//
// Created by jman9 on 2/10/2021.
//
#include <iostream>
#include <string.h>
#include "runtime.h"

#ifdef WINDOWS
#include <windows.h>
#else
#include <unistd.h>
#define Sleep(x) usleep((x)*1000)
#endif

#include "runtime.h"

using namespace std;

runtime::runtime(){

}

int runtime::makeChoice(string c1, string c2, string c3){
    string choice;
    cout << "What would you like to do?" << endl <<
        "A) " << c1 << endl <<
        "B) " << c2 << endl <<
        "C) " << c3 << endl;
    cin >> choice;
    return 0;
}

int runtime::battleship(int playerHealth, int enemyHealth){
    bool gameOver = false;
    //say time to fight!
    while(gameOver==false){

        //where do you want to punch? (up down left right)

        //where do you want to dodge? (up down left right)
        cout << "" << endl;
        //use rand number based on accuracy to decide if hit, and then rand number based on strength to decide on damage.
        //make player and enemy classes
        //he punched _ you dodged _. you punched _ he dodged _. his health is _, your health is _
        if(playerHealth<=0 || enemyHealth<=0)
            gameOver = true;
    }
}