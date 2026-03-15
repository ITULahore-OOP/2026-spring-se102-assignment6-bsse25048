#ifndef WARRIOR_H 
#define WARRIOR_H

#include <iostream> // for input/output
#include <string> // for string
#include "Hero.h" // include hero base class
using namespace std;

class Warrior : public Hero { // warrior inherits from hero
    int armorRating; // armor value

public:
    Warrior(string, int, int, int); // constructor
    int getArmor(); // return armor rating
    const int calculateEffectiveHealth(); // compute effective health with armor
};

#endif