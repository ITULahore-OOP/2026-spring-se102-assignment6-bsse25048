#include "MagicalEntity.h" // include magical entity class

MagicalEntity :: MagicalEntity (int mana, int spell) {
    manaPool = mana; // set mana pool
    spellPower = spell; // set spell power
}

const int MagicalEntity :: getMana() {
    return manaPool; // return mana value
}

const int MagicalEntity :: getSpellPower() {
    return spellPower; // return spell power
}