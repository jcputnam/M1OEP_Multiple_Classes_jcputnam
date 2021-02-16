//
// Created by jman9 on 2/10/2021.
//

#ifndef M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H
#define M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H

#include <cstring>
using namespace std;

class runtime {
    public:
        //basic constructor, sets favColor to green
        runtime();

        int getPoints();
        int getNumFights();
        int getPlayerHealth();
        string pause();
        int makeChoice(string c1, string c2, string c3, string prompt = "What would you like to do?");
        int fight(int playerHealth, int enemyHealth);

    private:
        int points;
        int numFights;
        int playerHealth;
        string defaultPrompt = "What would you like to do?";

};


#endif //M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H
