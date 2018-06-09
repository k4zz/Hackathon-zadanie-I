#include <iostream>
#include "CoffeeMachine.h"

int main()
{
	CoffeeMachine coffeeMachine;

	while (1)
	{
		int faceID = 0;

		std::cin >> faceID;

		if (std::cin.ignore())
		{
			coffeeMachine.setCurrentUserID(faceID);
			coffeeMachine.makeCoffee();
			std::cout << "Coffee made!" << std::endl;
		}
	}

	system("pause");

	return 0;
}