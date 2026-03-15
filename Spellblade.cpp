#include "Spellblade.h" // include spellblade class

Spellblade :: Spellblade(string name, int h, int power, int rating, int mana, int spell)
: Warrior(name, h, power, rating), MagicalEntity(mana, spell) {} // call parent constructors

const int Spellblade :: calculateHybridDamage() {
    return getPower() + getSpellPower(); // combine physical and magical damage
}