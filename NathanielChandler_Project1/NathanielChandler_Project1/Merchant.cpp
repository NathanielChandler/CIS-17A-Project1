#include "Merchant.h"


void Merchant::SetStock(int lvl,int rand1)
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
	}
	coinCost = (lvl / 2 + 1) * 2 + 10;
}

void Merchant::SetName(int rand1, int rand2)
{
	string part1[] = { "Zig ","Berben ","Gunter " };
	string part2[] = { "Floyd", "Zoeyd","Stanzen" };

	name += part1[rand1 % 3];
	name += part2[rand2 % 3];
}

Merchant::Merchant()
{
	upAtk = 0;
	upDef = 0;
	coinCost = 0;
}

Merchant::Merchant(int lvl,int rand1,int rand2)
{
	SetName(rand1, rand2);
	SetStock(lvl, rand1);
}

string Merchant::GetStock()
{
	string stock = "They are selling:\n";
	if (upAtk != 0)
	{
		stock += "  >Attack Buff of " + to_string(upAtk) + "\n";
	}
	if (upDef != 0)
	{
		stock += "  >Defense Buff of " + to_string(upDef) + "\n";
	}
	stock += "\nfor " + to_string(coinCost) + " coin(s)\n";
	return stock;
}

void Merchant::Purchase(Player *p, char select)
{

}

string Merchant::GetName()
{
	return name;
}

Merchant::~Merchant()
{
}
