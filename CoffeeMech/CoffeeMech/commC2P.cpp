#include "commC2P.h"

commC2P::commC2P()
{

}

commC2P::~commC2P()
{

}

std::string commC2P::readCommFile()
{
	while (true)
	{
		inCommFile.open("P2C.txt");

		if (!inCommFile)
		{
			continue;
		}
		else
		{
			break;
		}
	}

	std::string action;
	getline(inCommFile, action);

	inCommFile.close();

	std::rename("P2C.txt", "_P2C.txt");

	return action;
}

void commC2P::writeCommFile(commC2P::Action act)
{
	outCommFile.open("_C2P.txt", std::ofstream::trunc);

	std::string temp;
	switch (act)
	{
	case commC2P::highestCoffeeCount:
		temp = "highestCoffeeCount ";
		break;
	default:
		break;
	}

	outCommFile << temp;
	outCommFile.close();
	std::rename("_C2P.txt", "C2P.txt");
}

void commC2P::writeCommFile(commC2P::Action act, int id)
{
	outCommFile.open("_C2P.txt", std::ofstream::trunc);

	std::string temp;
	std::string strID = std::to_string(id);
	switch (act)
	{
	case commC2P::coffeeCountInc:
		temp = "coffeeCountInc " + strID + " ";
		break;
	default:
		break;
	}

	outCommFile << temp;

	outCommFile.close();
	std::rename("_C2P.txt", "C2P.txt");
}