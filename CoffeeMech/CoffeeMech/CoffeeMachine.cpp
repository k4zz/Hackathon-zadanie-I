#include <iostream>

#include "commC2P.h"
#include "CoffeeMachine.h"

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
		sendFaceID(1);
	}
}

void CoffeeMachine::sendFaceID(int ID)
{
	commC2P comm;
	comm.writeCommFile(commC2P::Action::coffeeCountInc, ID);
	std::string temp = comm.readCommFile();
	
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

