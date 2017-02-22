#pragma once
#include <string>
#include <iostream>
using namespace std;
class Merchant
{
private:
	unsigned int upAtk;
	unsigned int upDef;
	unsigned int coinCost;
	string name;
	string RandomizeName(int, int);
	void RandomizeStock(int,int);
public:
	Merchant();
	Merchant(int, int, int);
	string GetName();
	~Merchant();
};

