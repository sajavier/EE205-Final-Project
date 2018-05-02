#include "char.hpp"
#include "fighter.hpp"

using namespace std;

Attacker::Attacker(string n) :
	Charac(n, 500, 50, 10, 20) {}

Healer::Healer(string n) :
	Charac(n, 500, 30, 10, 50) {}

Defender::Defender(string n) :
	Charac(n, 500, 30, 15, 20) {}

Regular::Regular(string n) :
	Charac(n, 500, 40, 12, 30) {}
