#include<iostream>
using namespace std;
int main() {
	int room = 1;
	char input{};
	while ( input != 'q' ) {
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go n or e" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			if (input == 'e')
				room = 12;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 2:
			cout << "you're in room 2, you can go s or e" << endl;
			cin >> input;
			if (input == 's')
				room = 1;
			if (input == 'e')
				room = 13;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 3:
			cout << "you're in room 3, you can go s" << endl;
			cin >> input;
			if (input == 's')
				room = 4;
			
			else
				cout << "sorry, not an option" << endl;
			break;
		case 4:
			cout << "you're in room 4, you can go n or w or s" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			if (input == 'w')
				room = 5;
			if (input == 's')
				room = 7;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 5:
			cout << "you're in room 5, you can go s or e" << endl;
			cin >> input;
			if (input == 's')
				room = 6;
			if (input == 'e')
				room = 4;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 6:
			cout << "you died" << endl;
			
		
			input = 'q';
			break;
		case 7:
			cout << "you're in room 7, you can go n or e or w" << endl;
			cin >> input;
			if (input == 'n')
				room = 4;
			if (input == 'e')
				room = 8;
			if (input == 'w')
				room = 6;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 8:
			cout << "you're in room 8.you can go w or s or n" << endl;
			cin >> input;
			if (input == 'w')
				room = 7;
			if (input == 's')
				room = 9;
			if (input == 'n')
				room = 1;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 9:
			cout << "you're in room 9, you can go n or e" << endl;
			cin >> input;
			if (input == 'n')
				room = 8;
			if (input == 'e')
				room = 10;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 10:
			cout << "you're in room 10, you can go w or e" << endl;
			cin >> input;
			if (input == 'w')
				room = 9;
			if (input == 'e')
				room = 11;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 11:
			cout << "you win!" << endl;
			input = 'q';
	
		
			break;
		case 12:
			cout << "you're in room 12, you can go n or ew" << endl;
			cin >> input;
			if (input == 'n')
				room = 13;
			if (input == 'w')
				room = 1;
			else
				cout << "sorry, not an option" << endl;
			break;
		case 13:
			cout << "you're in room 13, you can go s or w" << endl;
			cin >> input;
			if (input == 's')
				room = 12;
			if (input == 'w')
				room = 2;
			else
				cout << "sorry, not an option" << endl;
			break;

		}

	}//endgame loop
	cout << "gameover, thanks for playing!" << endl;
}
