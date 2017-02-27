#pragma once
#include "Merchant.h"
class Place
{

private:
	bool hasMerchant;
	bool isSet;
	string name;
	Merchant merchant;
	void SetName(int, int);
public:
	Place();
	void SetPlace(int, int, int);
	string GetName();
	Merchant GetMerchant();
	bool GetisSet();
	~Place();
};

