#include "battle.hpp"
#include "char.hpp"
#include "fighter.hpp"
#include "robot.hpp"
#include <iostream>

using namespace std;

bool battle() {
	char c;
	string n;

	Charac *f = nullptr;
	cout << "Please choose a fighter" << endl;
	cin >> c;

	if(c == 'A'|| c == 'a')
		f = new Attacker("");
	else if(c == 'B' || c == 'b')
		f = new Healer("");
	else if(c == 'C' || c == 'c')
		f = new Defender("");
	else 
		f = new Regular("");

	cout << "please enter name of your fighter" << endl;
	cin >> n;

	f->set_name(n);
	Robot r("BOSS");

	cout << f->get_name() << ": " << f->get_health() << endl;
	cout << r.get_name() << ": " << r.get_health() << endl;

	while(r.get_health() >= 0 && f->get_health() >= 0) 
	{
		char m;
		cout << "Please choose a move" << endl;
		cout << "A = attack, H = heal, S = Special Power" << endl;
		cin >> m;

		if(m == 'Q' || m == 'q')
			return 0;
		else {
			while(m != 'A' && m != 'a'&& m != 'H' && m != 'h' && m != 'S' && m != 's')
			{
				cout << "Please enter valid move" << endl;
				cin >> m;
			} 
		}
		
		switch(m) {
			case 'A':
			case 'a':
				f->Attack(r);
				break;
			case 'H':
			case 'h':
				//healing function
				break;
			case 'S':
			case 's':
				//Special function
				break;
			case 'Q':
			case 'q':
				return 0;
		}
		r.Attack(*f);
		cout << f->get_name() << ": " << f->get_health() << endl;
		cout << r.get_name() << ": " << r.get_health() << endl;

	}
	/*
	cout << "Your fighter is: " << f->get_name() << endl;
	cout << "\tHealth: " << f->get_health() << endl;
	cout << "\tAttack: " << f->get_attack() << endl;
	cout << "\tDefense: " << f->get_defense() << endl;
	cout << "\tHealing: " << f->get_healing() << endl;
	*/
	return 0;
}
