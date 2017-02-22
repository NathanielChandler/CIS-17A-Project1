#include "Place.h"


Place::Place()
{
}

void Place::SetPlace(int lvl,int rand1, int rand2)
{

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
