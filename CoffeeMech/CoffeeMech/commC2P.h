#ifndef COMMC2P_H
#define COMMC2P_H

#include <string>
#include <iostream>
#include <fstream>

class commC2P
{
private:
	
	std::ifstream inCommFile;
	std::ofstream outCommFile;	

public:

	commC2P();
	~commC2P();

	enum Action
	{
		coffeeCountInc,
		maintCountInc,
		coffeeCountReset,
		maintCountReset,
		addPerson,
		choosePerson
	};

	std::string action;
	std::string readCommFile();
	void writeCommFile(Action act);
	void writeCommFile(Action act, int id);
	void writeCommFile(Action act, std::string surname, std::string name, std::string email);
};

#endif