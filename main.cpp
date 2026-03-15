#include <iostream> // input output
#include <string> // string support
#include "Hero.h" // hero class
#include "Warrior.h" // warrior class
#include "Knight.h" // knight class
#include "Guild.h" // guild class

using namespace std;

int main()
{
    string guildName; // store guild name
    cout << "enter guild name: ";
    cin >> guildName; // take guild name

    Guild g(guildName); // create guild object

    Hero* heroes[10]; // array of hero pointers
    int heroCount = 0; // track heroes created

    int choice = 0; // menu choice

    while(choice != 5) // loop until exit
    {
        cout << endl;
        cout << "1 create hero" << endl; // create hero
        cout << "2 create warrior" << endl; // create warrior
        cout << "3 add hero to guild" << endl; // add hero
        cout << "4 show guild stats" << endl; // display stats
        cout << "5 exit" << endl; // exit program
        cout << "choice: ";
        cin >> choice; // read user choice

        if(choice == 1)
        {
            string name; // hero name
            int health, power; // hero stats

            cout << "hero name: ";
            cin >> name;
            cout << "health: ";
            cin >> health;
            cout << "power: ";
            cin >> power;

            heroes[heroCount] = new Hero(name, health, power); // create hero
            heroCount++; // increase count

            cout << "hero created" << endl;
        }

        else if(choice == 2)
        {
            string name; // warrior name
            int health, power, armor; // warrior stats

            cout << "warrior name: ";
            cin >> name;
            cout << "health: ";
            cin >> health;
            cout << "power: ";
            cin >> power;
            cout << "armor rating: ";
            cin >> armor;

            heroes[heroCount] = new Warrior(name, health, power, armor); // create warrior
            heroCount++; // increase count

            cout << "warrior created" << endl;
        }

        else if(choice == 3)
        {
            if(heroCount == 0) // check if heroes exist
            {
                cout << "no heroes available" << endl;
            }
            else
            {
                cout << "select hero index:" << endl;

                for(int i = 0; i < heroCount; i++) // list heroes
                {
                    cout << i << " " << heroes[i]->getName() << endl;
                }

                int index; // selected hero
                cin >> index;

                if(index >= 0 && index < heroCount) // validate index
                {
                    g += heroes[index]; // add hero to guild
                    cout << "hero added to guild" << endl;
                }
            }
        }

        else if(choice == 4)
        {
            g.displayGuildStats(); // show guild info
        }
    }

    // delete heroes created with new
    for(int i = 0; i < heroCount; i++)
    {
        delete heroes[i];
    }

    return 0; // end program
}