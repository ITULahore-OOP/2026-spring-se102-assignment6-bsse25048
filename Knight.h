#ifndef KNIGHT_H 
#define KNIGHT_H

#include <iostream> // for input/output
#include <string> // for string
#include "Warrior.h" // include warrior base class
using namespace std;

class Knight : public Warrior { // knight inherits from warrior
    int chargeBonus; // bonus damage for charge

public:
    Knight(string, int, int, int, int); // constructor
    int getChargeBonus(); // return charge bonus
    const int calculateBurstDamage(); // calculate burst attack damage
};

#endif