#include "Hero.h" // include hero class

Hero :: Hero() {} // default constructor

Hero :: Hero(string name, int h, int power) { // parameterized constructor
    heroName = name; // set hero name
    health = h; // set health
    basePower = power; // set power
}

Hero :: ~Hero() { // destructor
    cout<<"hero class destroyed"<<endl; // print destroy message
}

string Hero :: getName() const { // return hero name
    return heroName;
}

int Hero :: getHealth() const { // return hero health
    return health;
}

int Hero :: getPower(){ // return hero power
    return basePower;
}

void Hero :: takeDamage(int damage){ // reduce hero health
    if(health>=damage){ // if enough health
        health = health - damage; // subtract damage
    } else {
        health = 0; // prevent negative health
    }
}

const bool Hero :: operator>(const Hero &other){ // compare hero power
    if(basePower>other.basePower) {
        return true; // this hero stronger
    } else {
        return false; // other hero stronger
    }
}

const int Hero :: operator+(const Hero &other){ // add health of two heroes
    return health + other.health;
}