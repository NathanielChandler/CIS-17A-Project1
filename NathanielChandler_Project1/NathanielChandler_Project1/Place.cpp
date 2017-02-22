#include "Place.h"


Place::Place()
{
}

void Place::SetPlace(int lvl,int rand1, int rand2)
{

	merchant = Merchant(lvl,rand1, rand2);
	hasMerchant = true;

}

Merchant Place::GetMerchant()
{
	return merchant;
}


Place::~Place()
{
}
