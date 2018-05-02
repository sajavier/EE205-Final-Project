#include "char.hpp"
#include "battle.hpp"
#include "fighter.hpp"
#include "robot.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
	char c;

	cout << "Welcome to the Robot Game!" << endl;
	cout << "Would you like to start a game?" << endl;
	cin >> c;

	if(c == 'y' || c == 'Y') {
		while(c == 'y' || c == 'Y') {
			while(battle());
			cout << "Would you like to play another game?" << endl;
			cin >> c;
		}
	}
	else
		return 0;
}
