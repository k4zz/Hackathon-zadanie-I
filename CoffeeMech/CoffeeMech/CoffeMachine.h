#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine
{
private:

	int counterOfCoffee;
	int maintenanceInterval;
	int currentUserID;

public:

	CoffeeMachine();
	~CoffeeMachine();

	bool isMaintenanceReq();
	void makeCoffee();
	void sendFaceID();
	void sendMaintenanceReq();

	int getCounterOfCoffee();
	void setCounterOfCoffee(int num);

	int getMaintenanceInterval();
	void setMaintenanceInterval(int num);

};

#endif