#include "Warrior.h" // include warrior class

Warrior :: Warrior(string name, int h, int power, int rating)
: Hero(name, h, power) { // call hero constructor
    armorRating = rating; // set armor rating
}

int Warrior :: getArmor(){
    return armorRating; // return armor value
}

const int Warrior :: calculateEffectiveHealth(){
    return getHealth() + (armorRating * 2); // calculate health with armor bonus
}