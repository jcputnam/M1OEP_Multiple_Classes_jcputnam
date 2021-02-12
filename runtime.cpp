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


using namespace std;


static int makeChoice(string c1, string c2, string c3){
    string choice;
    cout << "What would you like to do?" << endl <<
        "A) " << c1 << endl <<
        "B) " << c2 << endl <<
        "C) " << c3 << endl;
    cin >> choice;
    return 0;
}


