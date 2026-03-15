#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include <iostream> // for input/output
#include <string> // for string
using namespace std;

class MagicalEntity {
    int manaPool; // mana value
    int spellPower; // magical attack power

public:
    MagicalEntity(int, int); // constructor
    const int getMana(); // return mana pool
    const int getSpellPower(); // return spell power
};

#endif 