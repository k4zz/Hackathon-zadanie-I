#include "CoffeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine()
{
	counterOfCoffee = 0;
	maintenanceInterval = 15;
	currentUserID = 0;
}

CoffeeMachine::~CoffeeMachine()
{

}

bool CoffeeMachine::isMaintenanceReq()
{
	if (counterOfCoffee % maintenanceInterval == 0)
	{
		return true;
	}
}

void CoffeeMachine::makeCoffee()
{
	if (isMaintenanceReq())
	{
		std::cout << "Cannot make a coffee. Maintenance required" << std::endl;
	}
	else
	{
		sendFaceID();
	}
}

void CoffeeMachine::sendFaceID()
{
}

void CoffeeMachine::sendMaintenanceReq()
{

}

int CoffeeMachine::getCounterOfCoffee()
{
	return counterOfCoffee;
}

void CoffeeMachine::setCounterOfCoffee(int num)
{
	counterOfCoffee = num;
}

int CoffeeMachine::getMaintenanceInterval()
{
	return maintenanceInterval;
}

void CoffeeMachine::setMaintenanceInterval(int num)
{
	maintenanceInterval = num;
}

