//bully fighting simulator
//one class will be bully
//other class will be main

//at least 2 classes
//one method per class that is nontrivial
//4 overloaded operators total
//one enum
//one struct
//readme that answers questions from prompt sheet

#include <iostream>
#include <string.h>
#include "runtime.h"
using namespace std;

int main() {
    string playerName, nothing;
    runtime run = runtime();
    cout << "Welcome to the middle school bully handling simulation program. By the end of this short simulation, \n"
            "you will know how to deal with bullies, win the heart of your romantic interest, and be very popular \n"
            "in middle school." << endl;
    cout << "First thing's first, what is your name?" << endl;
    cin >> playerName;

    cout << "Welcome, " + playerName + ". ";
    cout << "Today is your first day of middle school, and man are you pumped. You just got off the bus and you \n"
            "can already tell this is going to be a great year. You\'re not a fifth grader anymore! You're a big \n"
            "kid now, and it\'s high time the world learned it. You\'re wearing your new Kohl\'s knockoff brand \n"
            "converse, as well as your sweet mutant ninja turtles backpack, and you\'re ready to tear it up.\n";
    system("pause");
    cout << "Just as you're walking in the front door, you get slammed to the side by what you initially think is\n"
            "a gorilla.\n"
            "\"Move it or lose it dork! hahaha!\" shouts the ape-like middle schooler.\n\n";
    run.makeChoice("Dance it, big time.","burn the house down.","Scream!");
    //implement mini battleship for where you duck to / where bully swings
    return 0;
}
