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
