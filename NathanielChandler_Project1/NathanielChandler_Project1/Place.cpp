#include "Place.h"
#include <array>

void Place::SetName(int rand1, int rand2)
{
	string part1[]= { "Yarb","Bergen","Hallow" };
	string part2[] = { "berg", "werth","stanz" };

	name += part1[rand1 % 3];
	name += part2[rand2 % 3];
}

Place::Place()
{
}

void Place::SetPlace(int lvl,int rand1, int rand2)
{
	SetName(rand1, rand2);
	merchant = Merchant(lvl,rand1, rand2);
	hasMerchant = true;
}

void Place::setNorth(Place * x)
{
	north = x;
}

void Place::setSouth(Place * x)
{
	south = x;
}

void Place::setEast(Place * x)
{
	east = x;
}

void Place::setWest(Place * x)
{
	west = x;
}

Place Place::getNorth()
{
	return *north;
}

Place Place::getSouth()
{
	return *south;
}

Place Place::getEast()
{
	return *east;
}

Place Place::getWest()
{
	return *west;
}

Merchant Place::GetMerchant()
{
	return merchant;
}


Place::~Place()
{
}
