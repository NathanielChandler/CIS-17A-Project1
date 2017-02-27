#pragma once
#include "Player.h"
#include <string>
using namespace std;
class Merchant
{
private:
	unsigned int upAtk;
	unsigned int upDef;
	unsigned int coinCost;
	string name;
	void SetName(int, int);
	void SetStock(int,int);
public:
	Merchant();
	Merchant(int, int, int);
	string GetStock();
	bool Purchase(Player &,char);
	string GetName();
	~Merchant();
};

