#include "char.hpp"
#include <iostream>
using namespace std;

//Constructors
Charac::Charac() :
	name(""),
	health(0),
	attack(0),
	defense(0),
	healing(0) {}

Charac::Charac(string name_, int health_, int attack_, int defense_, int healing_) :
	name(name_),
	health(health_),
	attack(attack_),
	defense(defense_),
	healing(healing_) {}

Charac::Charac(const Charac& other) :
	name(other.name),
	health(other.health),
	attack(other.attack),
	defense(other.defense),
	healing(other.healing) {}

//getters
string Charac::get_name() const {return name;}
int Charac::get_health() const {return health;}
int Charac::get_attack() const {return attack;}
int Charac::get_defense() const {return defense;}
int Charac::get_healing() const {return healing;}

//setters
void Charac::set_name(string s) {name = s;}
void Charac::set_health(int h) {health = h;}
void Charac::set_attack(int a) {attack = a;}
void Charac::set_defense(int d) {defense = d;}
void Charac::set_healing(int h) {healing = h;}

//functions
void Charac::Attack(Charac& other) {
	int damage;
	damage = this->get_attack() - other.get_defense();
	other.set_health(other.get_health() - damage);
}
	
