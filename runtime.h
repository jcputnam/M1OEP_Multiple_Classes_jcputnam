//
// Created by jman9 on 2/10/2021.
//

#ifndef M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H
#define M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H

#include <string.h>
using namespace std;

class runtime {
    public:
        //basic constructor, sets favColor to green
        runtime();

        static int makeChoice(string c1, string c2, string c3);
        int battleship(int playerHealth, int enemyHealth);

    private:
        int x;
};


#endif //M1OEP_MULTIPLE_CLASSES_JCPUTNAM_RUNTIME_H
