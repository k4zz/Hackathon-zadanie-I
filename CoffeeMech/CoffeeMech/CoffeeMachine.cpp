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
	bool temp;
	temp = (counterOfCoffee % maintenanceInterval == 0) ?  true : false;
	return temp;
}

void CoffeeMachine::makeCoffee()
{
	if (isMaintenanceReq())
	{
		std::cout << "Cannot make a coffee. Maintenance required" << std::endl;
	}
	else
	{
		sendFaceID(currentUserID);
		counterOfCoffee++;
	}
}

void CoffeeMachine::sendFaceID(int ID)
{	
	comm.writeCommFile(commC2P::Action::coffeeCountInc, ID);
	std::string temp = comm.readCommFile();	
}

void CoffeeMachine::sendMaintenanceReq()
{
	comm.writeCommFile(commC2P::Action::choosePerson);
	std::string temp = comm.readCommFile();
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

void CoffeeMachine::setCurrentUserID(int faceID)
{
	currentUserID = faceID;
}

