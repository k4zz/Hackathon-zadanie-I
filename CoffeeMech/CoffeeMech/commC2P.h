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
		highestCoffeeCount
	};

	std::string action;
	std::string readCommFile();
	void writeCommFile(Action act);
	void writeCommFile(Action act, int id);
};

#endif