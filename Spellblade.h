#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include <iostream> // for input/output
#include <string> // for string
#include "Warrior.h" // include warrior class
#include "MagicalEntity.h" // include magical entity class
using namespace std;

class Spellblade : public Warrior, public MagicalEntity { // multiple inheritance
public:
    Spellblade(string, int, int, int, int, int); // constructor
    const int calculateHybridDamage(); // combine physical and magical damage
};

#endif