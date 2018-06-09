#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

#include "commC2P.h"

class CoffeeMachine
{
private:

	int counterOfCoffee;
	int maintenanceInterval;
	int currentUserID;

	commC2P comm;
	

public:

	CoffeeMachine();
	~CoffeeMachine();

	bool isMaintenanceReq();
	void makeCoffee();
	void sendFaceID(int ID);
	void sendMaintenanceReq();

	int getCounterOfCoffee();
	void setCounterOfCoffee(int num);

	int getMaintenanceInterval();
	void setMaintenanceInterval(int num);

	void setCurrentUserID(int faceID);

};

#endif