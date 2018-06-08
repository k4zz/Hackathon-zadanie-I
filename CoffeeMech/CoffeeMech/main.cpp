#include <iostream>
#include "CoffeMachine.h"
#include "commC2P.h"

int main()
{
	CoffeeMachine coffeeMachine;

	std::ofstream file;

	while(1)
	{
		try
		{
			file.open("dupa.txt", std::ios::in);
		}
		catch (const std::exception&)
		{
			continue;
		}
		break;
	}

	std::cout << "DUPA OPENED" << std::endl;
	system("pause");

	return 0;
}