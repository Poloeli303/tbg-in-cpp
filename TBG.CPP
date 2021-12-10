//Elijah Duran
//The Kidnapping...
//12/10/2021
#include <iostream>
#include <Windows.h>
using namespace std;
int health = 100;
int turns = 0;
void NPC(); //function declaration
void ColorRandomizer();
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
            cout << "You're in the room again but you want to escape. You see a door and a vent. Where will you go? Press d for door and v for vent. You see bread to pick it up type 'bread'. Press i to see your inventory." << endl;
            cin >> input;
            if (input == "giveall") {
                inventory[0] = "key";
                inventory[1] = "wirecutters";
            }
            else if (input == "d")
                room = 2;
            else if (input == "v")
                room = 9;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("bread") == 0) {
                inventory[2] = "bread";
                cout << "you picked up bread!" << endl << endl;
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
            cout << "Your in another room. Press (b) to go back and (s) to go straight. You find a coin to pick it up type 'coin'. Press i for inventory." << endl;
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
            else if (input.compare("coin") == 0) {
                inventory[3] = "coin";
                cout << "you picked up the coin!" << endl << endl;
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
            cout << "You got past the guard and now you must continue. You can go back (b) and you can go straight (s).You find a keycard to pick it up type 'keycard'. Press i for inventory." << endl;
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
            else if (input.compare("keycard") == 0) {
                inventory[4] = "keycard";
                cout << "you picked up the keycard!" << endl << endl;
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
            system("Color 40");//function call
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
            NPC();
            system("Color 40");//function call
            cout << "As you start to go through the vents you hear animal noises. Unsure of what to do you continue. You can go left (l) ot back (b). Press i for inventory." << endl;
            cin >> input;
            health -= 20;
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
            system("Color 07");//function call
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
            NPC();
            system("Color 40");//function call
            cout << "You are still in the vent but you hear animal noises and get nervous. You can go back (b) or go straight (s)." << endl;
            health -= 20;
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
            system("Color 07");//function call
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
            system("Color 20");//function call
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
            system("Color 07");//function call
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
            //ColorRandomizer();
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
 
        case 21:
            cout << "You go up the stairs and find your self at a brown cracking door. Do you wish to continue? Press 's' to go straight or 'b' to go back. Press 'i' for inventory." << endl;
            cin >> input;
            if (input == "s")
                room = 22;
            else if (input == "b")
                room = 17;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }

            else
                cout << "sorry, not an option" << endl;
            break;
          case 22:
            cout << "You go through the door and see your in the kitchen. The old brown door slams shut theres no way back. There are two ways to go either right (r) or left (l). Press 'i' for inventory." << endl;
            cin >> input;
            if (input == "r")
                room = 23;
            else if (input == "l")
                room = 24;
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }
            else if (input.compare("back") == 0 || input.compare("b") == 0) {
                if (inventory[0].compare("nada") != 0)
                    cout << "the door is locked" << endl;
                else
                    room = 22;
            }
            else
                cout << "sorry, not an option" << endl;
            break;
          case 23:
              system("Color 04");//function call
            cout << "You go right and realize your in the living room. You look to the left because you hear the tv on. There is a man sitting on the couch. As you try to walk back the floor creaks. He gets up to find that you have escaped and kills you." << endl;
            health = 0;
            break;
          case 24:
            cout << "You go to the left and see a door leading outside you can go through it by pressing 's' or back (b). Press 'i' for inventory." << endl;
            cin >> input;
            if (input == "s")
                room = 25;
            else if (input == "b")
                room = 22;  
            else if (input == "i") {
                cout << "Here is your inventory:" << endl;
                for (int i = 0; i < 10; i++)
                    cout << inventory[i] << endl;
                cout << endl << endl;
            }

            else
                cout << "sorry, not an option" << endl;
            break;
          case 25:
              system("Color 20");//function call
              cout << "You can run away now gooo!!!" << endl;
              health = 0;
                  break;
        }

    }//end game loop
    cout << "Game over. Thanks for playing! Press q to end game." << endl;
}
void NPC() {
    int num = rand() % 3 + 1;
    switch (num) {
    case 1:
        cout << "a mouse appears!" << endl<<endl;
        break;
    case 2:
        cout << "a spider appears!" << endl<<endl;
        break;
    case 3:
        cout << "a snake appears!" << endl<<endl;
        break;
    }
}
void ColorRandomizer() {
    int num = rand() % 4; //generates a num between 0-3
    if (num == 0)
        system("Color 2C");
    if (num == 1)
        system("Color 3B");
    if (num == 2)
        system("Color 2A");
    if (num == 3)
        system("Color 1C");
}
