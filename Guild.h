#ifndef GUILD_H 
#define GUILD_H

#include <iostream> // for input/output
#include <string> // for string
#include "Hero.h" // include hero class
using namespace std;

class Guild {
    string guildName; // guild name
    Hero* roster[15]; // array of hero pointers
    int memberCount; // number of heroes in guild

public:
    Guild(string); // constructor
    ~Guild(); // destructor

    int calculateTotalGuildPower(); // calculate total power of guild
    void displayGuildStats(); // display guild statistics

    void operator+=(Hero* newHero); // add hero to guild

    friend ostream& operator<<(ostream& os, const Guild& g); // output guild info
};

#endif 