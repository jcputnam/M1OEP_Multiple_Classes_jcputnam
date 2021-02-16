//TODO: pepper it with more middle school references
//story will be showing up, going to class, going to lunch / recess, going to class, going home


//at least 2 classes - maybe add enemy class
//one method per class that is nontrivial
//4 overloaded operators total - read more about this
//one enum - maybe names? or like days of week? or scientific compounds to add together in science thing
//one struct - make struct for person - one for player, one player, 2 enemies
//readme that answers questions from prompt sheet

#include <iostream>
#include <cstring>
#include "runtime.h"
using namespace std;

struct enemy{
    string name;
    int health;
    int points;
};

enum names{
    ricky,
    richard,
    bartholomew,
    daniel,
    north,
    billy
};

int main() {
    int choice;
    enemy d;
    d.name=names(rand() % 4);
    string playerName, nothing;
    runtime run = runtime();
    cout << "Welcome to the middle school bully handling simulation program. By the end of this short simulation, \n"
            "you will know how to deal with bullies, win the heart of your romantic interest, and be very popular \n"
            "in middle school." << endl;
    cout << "What is your first name?" << endl;
    cin >> playerName;
    cout << "Welcome, " + playerName + ". ";
    cout << "Today is your first day of middle school, and man are you pumped. You just got off the bus and you \n"
            "can already tell this is going to be a great year. You\'re not a fifth grader anymore! You're a big \n"
            "kid now, and it\'s high time the world learned it. You\'re wearing your new Kohl\'s knockoff brand \n"
            "converse, as well as your sweet mutant ninja turtles backpack, and you\'re ready to tear it up.\n";
    run.pause();
    cout << "Just as you're walking in the front door, you get slammed to the side by what you initially think is\n"
            "a gorilla.\n"
            "\"Move it or lose it dork! hahaha!\" shouts the ape-like middle schooler.\n";
    choice = run.makeChoice("shout \"hey, you rascal!\"","punch that jerk in the face!","Shrug it off");
    if (choice==0 || choice==1)
        run.fight(25, 10);
    cout << "The ape middle schooler runs off and you suddenly hear the bell ring. Hot damn! You\'re late for class!\n"
            "you sprint through the halls and cut through a empty classrooms to get to room 205, where your biology\n"
            "class was being held. You burst through the door, and the whole class turns to look at you. this is so\n"
            "embarassing! \n"
            "\"Late for class again, " << playerName << "?\" says Miss Fowl, your bio teacher. You nervously walk to\n"
            "your desk and sit down.\n";
    run.pause();
            //TODO: add pause here. also add option to pick who you sit next to for prev part, like theres someone u think is cute and ur friend and u have to pick
            //TODO: add science question to gain or lose points
    cout << "You do some sweet science experiments and have a lot of fun! science class is the nads cuz you get to\n"
            "light things on fire and pour chemicals on the heads of all your pals"<< endl;
    run.pause();
    cout << "It's now lunch time. hell yeah! The best part of the day! You hop on your cool skateboard and roll down\n"
            "to the cafeteria, doing a tripple kickflip turnaround on the way there. it's sweet, and everyone thinks\n"
            "that you're awesome! you get a styrofoam tray with a few cardboard tubes full of cheese and you go sit\n"
            "with your cool friends. you all hang out and talk about cool things like fortnite and lunchables. Just\n"
            "then, you see Billy Snyderson fly by on his new Rick and Morty brand heelies! so sweet! you run after\n"
            "him to ask if you can try them. He flies through the cafeteria and out the door, and just as you try to\n"
            "follow him through, you bump into Moe, the class bully." << endl;
    run.pause();
    cout << "\"Hey, wimp!\" Moe says, towering above you. He's an 8th grader, and you're just a meager 6th.\n"
            "\"I'm going to pound you for that!\"";
    choice = run.makeChoice("\"Bring it on, Moe! I'm not scared of you!\"","\"Moe, I was wondering, are your maladjusted"
                                                                  " antisocial tendencies the product of your berserk"
                                                                  " pituitary gland?\"","Run!!");
    if (choice==0 || choice==1)
        run.fight(25, 10);
    cout << "The bell rings, signifying the end of the day. Dismissal, at last- a time where nothing matters anymore\n"
            "and you can finally start forgetting everything you've learned today. You follow the crowds of students\n"
            "out the front of the school, board the bus, and are carried home. and so we beat on, boats against the\n"
            "current, bourne back ceaselessly into the past.\n";
    run.pause();
    cout << "congratulations! You have completed the middle schooler simulator! let us tally your points:" << endl;
    cout << endl;
    return 0;
}
