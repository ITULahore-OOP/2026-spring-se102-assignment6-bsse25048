#ifndef HERO_H 
#define HERO_H

#include <iostream> 
#include <string> 
using namespace std;

class Hero {
    string heroName; // hero name
    int health; // hero health value
    int basePower; // hero base attack power

public:
    Hero(); // default constructor
    Hero(string, int, int); // parameterized constructor
    ~Hero(); // destructor

    string getName() const; // return hero name
    int getHealth() const; // return hero health
    int getPower(); // return hero power

    void takeDamage(int damage); // reduce health

    const bool operator>(const Hero &other); // compare power
    const int operator+(const Hero &other); // add health values
};

#endif