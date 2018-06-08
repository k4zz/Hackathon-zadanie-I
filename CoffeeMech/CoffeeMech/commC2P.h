#ifndef COMMC2P_H
#define COMMC2P_H

#include <string>
#include <iostream>
#include <fstream>

class commC2P
{
private:

	std::ofstream commFile;

	enum Action
	{
		coffeeCountInc,
        highestCoffeeCount
	};

	std::string action;

public:

	commC2P();
	~commC2P();

	void readCommFile();
	void writeCommFile();


};

#endif