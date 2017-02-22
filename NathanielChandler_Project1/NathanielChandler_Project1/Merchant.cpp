#include "Merchant.h"


void Merchant::RandomizeStock(int lvl,int rand1)
{
	int value = rand1 % 3;
	switch (value)
	{
	case 0:
		upAtk = lvl / 2 + 1;
		break;
	case 1:
		upDef = lvl / 2 + 1;
		break;
	case 2:
		upAtk = lvl / 2 + 1;
		upDef = lvl / 2 + 1;
		break;
	default:
		cout << "Error - Stock not set" << endl;
	}
	coinCost = (lvl / 2 + 1) * 2 + 10;
}

string Merchant::RandomizeName(int, int)
{
	return string();
}

Merchant::Merchant()
{
	upAtk = 0;
	upDef = 0;
	coinCost = 0;
}

Merchant::Merchant(int lvl,int rand1,int rand2)
{

}

string Merchant::GetName()
{
	return name;
}

Merchant::~Merchant()
{
}
