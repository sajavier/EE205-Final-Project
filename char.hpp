#include <iostream>

class Charac {
	private:
		std::string name;
		int health;
		int attack;
		int defense;
		int healing;
	public:
		Charac();
		Charac(std::string name_, int health_, int attack_, int defense_, int healing_);
		Charac(const Charac& other);

		//getters
		std::string get_name() const;
		int get_health() const;
		int get_attack() const;
		int get_defense() const;
		int get_healing() const;

		//setters
		void set_name(std::string s);
		void set_health(int h);
		void set_attack(int a);
		void set_defense(int d);
		void set_healing(int h);

		//functions
		void Attack(Charac& other);
};
