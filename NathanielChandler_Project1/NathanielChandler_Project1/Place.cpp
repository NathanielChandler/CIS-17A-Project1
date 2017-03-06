#include "Place.h"

void Place::SetName(int rand1, int rand2)
{
	string part1[]= { "Yarb","Bergen","Hallow","Wicker","Stanzen" };
	string part2[] = { "berg", "werth","stanz" };

	name += part1[rand1 % 5];
	name += part2[rand2 % 3];
}

Place::Place()
{
	isSet = false;
}

void Place::SetPlace(int lvl,int rand1, int rand2)
{
	isSet = true;
	SetName(rand1, rand2);
	merchant = Merchant(lvl,rand1, rand2);
	hasMerchant = true;
	
}

bool Place::Purchase(Player &p, char select)
{
	if (p.GetCoin() < merchant.GetCoinCost())
	{
		return false;
	}
	else
	{
		switch (select)
		{
		case 'a':
			if (upAtk == 0)
			{
				return false;
			}
			p.SetCoin(p.GetCoin() - coinCost);
			p.AddAtk(upAtk);
			upAtk = 0;
			break;
		case 'd':
			if (upDef == 0)
			{
				return false;
			}
			p.SetCoin(p.GetCoin() - coinCost);
			p.AddDef(upDef);
			upDef = 0;
			break;
		}

		return true;
	}
}

string Place::GetName()
{
	return name;
}

Merchant Place::GetMerchant()
{
	return merchant;
}


bool Place::GetisSet()
{
	return isSet;
}


Place::~Place()
{
}
