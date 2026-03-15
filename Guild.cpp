#include "Guild.h" // include guild class


Guild :: Guild (string name){
    guildName = name; // set guild name
    memberCount = 0; // initialize member count
}

Guild::~Guild() {
    cout << "The guild " << guildName << " has been disbanded!" << endl; // destructor message
}

int Guild :: calculateTotalGuildPower(){
    int totalPower = 0; // store total power

    for(int i = 0; i < memberCount; i++) { // loop through members
        totalPower += roster[i]->getPower(); // add hero power
    }

    return totalPower; // return total guild power
}

void Guild :: displayGuildStats(){
    cout << "Guild Name: " << guildName << endl; // print guild name
    cout << "Total Members: " << memberCount << "/15" << endl; // show members count
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl; // show total power
}

void Guild :: operator+=(Hero* newHero){
    if (memberCount < 15){ // check guild capacity
        roster[memberCount] = newHero; // add hero to roster
        memberCount++; // increase member count
    } 
    else {
        cout << "Guild is at full capacity!" << endl; // capacity warning
    }
}

ostream& operator<<(ostream& os, const Guild& g) {
    os << "Guild: " << g.guildName << endl; // print guild name
    os << "Members: " << g.memberCount << endl; // print number of members

    for (int i = 0; i < g.memberCount; i++) { // loop through heroes
        os << "- " << g.roster[i]->getName() // print hero name
           << " (Power: " << g.roster[i]->getPower() << ")" << endl; // print hero power
    }

    return os; // return output stream
}