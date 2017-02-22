#pragma once
#include "Merchant.h"
class Place
{

private:
	bool hasMerchant;
	string name;
	Merchant merchant;
	Place *north;
	Place *south;
	Place *east;
	Place *west;
public:
	Place();
	void SetPlace(int, int, int);
	void setNorth(Place * x);
	void setSouth(Place * x);
	void setEast(Place * x);
	void setWest(Place * x);
	Merchant GetMerchant();
	~Place();
};

