#include "Knight.h" // include knight class

Knight :: Knight(string name, int h, int power, int rating, int bonus)
: Warrior(name, h, power, rating) { // call warrior constructor
    chargeBonus = bonus; // set charge bonus
}

int Knight :: getChargeBonus(){
    return chargeBonus; // return charge bonus
}

const int Knight :: calculateBurstDamage(){
    return getPower() + chargeBonus; // calculate burst damage
}