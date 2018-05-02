class Attacker: public Charac {
	public:
		Attacker(std::string name);
};

class Defender: public Charac {
	public:
		Defender(std::string name);
};

class Healer: public Charac {
	public:
		Healer(std::string name);
};

class Regular: public Charac {
	public:
		Regular(std::string name);
};
