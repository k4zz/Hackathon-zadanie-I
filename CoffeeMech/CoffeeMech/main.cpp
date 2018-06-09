#include <iostream>
#include "CoffeeMachine.h"

int main()
{
	CoffeeMachine coffeeMachine;
	while (1)
	{
		if (std::cin.ignore())
		{
			coffeeMachine.makeCoffee();
			std::cout << "Coffee made!" << std::endl;
		}
	}

	system("pause");

	return 0;
}