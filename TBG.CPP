#include <iostream>
using namespace std;
int health = 100;
int turns = 0;
int main() {
    int room = 1;
    string inventory[10];
    string input;
    cout << "You wake up after finding out you got kidnapped. You look around because you realize that your no longer at the mall. You hear a gas being let into the air and you pass out!!!" << endl << endl;
    while (input != "q" && health > 0) {
        cout << "Health:" << health << endl << endl;
        cout << "Turns:" << turns << endl << endl;
        turns++;
        switch (room) {
        case 1:
            cout << "You're in the room again but you want to escape. You see a door and a vent. Where will you go? Press d for door and v for vent. Press i to see your inventory." << endl;
            cin >> input;
            if (input == "d")
                room = 2;
            else if (input == "v")
                room = 9;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }

            else
                cout << "sorry, not an option" << endl;
            break;
        case 2:
            cout << "You find yourself in a room and as you look around you notice three doors 4 including the one you just came out of. You see a guard sleeping. You attack him. You can go to the left(l) but you need a key. You can go to the right(r). You can go straight(s). You can go back(b). Press (i) for your inventory." << endl << endl;
            cin >> input;
            if (input == "r")
                room = 3;
            else if (input == "s")
                room = 5;
            else if (input == "b")
                room = 1;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("left") == 0 || input.compare("l") == 0) {
                if (inventory[0].compare("key") != 0)
                    cout << "the door is locked" << endl;
                else
                    room = 4;
            }
            else
                cout << "sorry, not an option" << endl;
            break;
        case 3:
            cout << "Your in another room. Press (b) to go back and (s) to go straight. Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 2;
            else if (input == "s")
                room = 7;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 4:
            cout << "You get past the lock and now your in a different room. You can go back (b) and you can go straight (s). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 2;
            else if (input == "s")
                room = 8;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 5:
            cout << "You got past the guard and now you must continue. You can go back (b) and you can go straight (s). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 2;
            else if (input == "s")
                room = 6;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 6:
            cout << "You got past another room now time to continue. You can go back (b) and you can go straight (s). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 5;
            else if (input == "s")
                room = 17;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 7:
            cout << "You are in the closet and you see a key. You can pick up the key by typing (key). You can go back (b). Press i for inventory." << endl << endl;
            cin >> input;
            if (input == "b")
                room = 3;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("key") == 0) {
                inventory[0] = "key";
                cout << "you picked up the key!" << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 8:
            cout << "You are in another room but you get caught in a bear trap and get injured. You can go back (b) and straight (s). Press i for inventory." << endl;
            health -= 20;
            cin >> input;
            if (input == "b")
                room = 4;
            else if (input == "s")
                room = 18;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 9:
            cout << "You climbed into the vent and see a path. You can go right (r) or back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 1;
            else if (input == "r")
                room = 10;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 10:
            cout << "Your still in the vent but you continue. You can go straight (s) or back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 9;
            else if (input == "s")
                room = 11;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 11:
            cout << "You find yourself in front of a mouse. You kill it. You can go left (l) ot back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 10;
            else if (input == "l")
                room = 12;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 12:
            cout << "You see a fan moving extremely fast and the only way you can get past it is if you cut the power off but you have nothing to cut the wires with you must find the wire cutters. You can go back (b) or straight (s)." << endl;
            cin >> input;
            if (input == "b")
                room = 11;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("straight") == 0 || input.compare("s") == 0) {
                if (inventory[1].compare("wirecutters") != 0)
                    cout << "you cant get through with out wire cutters." << endl << endl;
                else
                    room = 13;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 13:
            cout << "You got past the fan. Great job! Now you must continue through the vents. You can go straight(s) or you can go back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "s")
                room = 14;
            else if (input == "b")
                room = 12;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 14:
            cout << "You are still in the vent but you encounter another mouse. You get bit but end up killing it. You can go back (b) or go straight (s)." << endl;
            health -= 10;
            cin >> input;
            if (input == "s")
                room = 15;
            else if (input == "b")
                room = 13;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 15:
            cout << "You see a door on the ceiling and you lift it. It's a way out! You can go (up) or you can go back (b)." << endl;
            cin >> input;
            if (input == "up")
                room = 16;
            else if (input == "b")
                room = 14;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 16:
            cout << "You got out now run run far away!!! Press q to end game." << endl;
            cin >> input;
            if (input == "q");
            break;
        case 17:
            cout << "You find yourself before some stairs do you want to go (up) or back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "up")
                room = 21;
            else if (input == "b")
                room = 6;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 18:
            cout << "You are injured but must continue moving. You can go right (r) or back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "r")
                room = 19;
            else if (input == "b")
                room = 8;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 19:
            cout << "You are still injured and getting slower but you must continue moving. You can go straight (s) or back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "s")
                room = 20;
            else if (input == "b")
                room = 18;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        case 20:
            cout << "You find a room with tools but they are all locked except for wire cutters. To pick up the wire cutter type (wire cutters). You can go back (b). Press i for inventory." << endl;
            cin >> input;
            if (input == "b")
                room = 19;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("wirecutters") == 0) {
                inventory[1] = "wirecutters";
                cout << "you picked up the wire cutters!" << endl << endl;
            }
            else
                cout << "sorry not an option" << endl;
            break;
        }

    }//end game loop
    cout << "Game over. Thanks for playing! Press q to end game." << endl;
}
