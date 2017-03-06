#pragma once
#include <iostream>
#include "Map.h"
using namespace std;

int main()
{
	Map map1 = Map(3);
	Player player = Player();
	//player.AddLvl(2);
	char temp;
	bool notDone = true;
	cout << to_string(map1.getSize()) << endl;
	cout << map1.getCurrent().GetName() << endl;
	while (notDone)
	{
		cin >> temp;
		notDone = map1.goDirection(temp, player.GetLvl());
		cout << map1.getCurrent().GetName() << endl;
		cout << map1.getCurrent().GetMerchant().GetName() << endl;
		cout << map1.getCurrent().GetMerchant().GetStock() << endl;
		cout << "You have " << player.GetCoin() << " \n  What would you like to purchase? \n\t(a = atk, d = def, n = neither)" << endl;
		cin >> temp;
		if (temp == 'a' || temp == 'd')
		{
			if (map1.getCurrent().Purchase(player, temp,map1.getCurrent().GetMerchant()))
			{
				cout << "Purchase Successful" << endl;
			}
			else
			{
				cout << "Purchase Denied" << endl;
			}
		}
		cout << "Where would you like to go?" << endl;
	}
	return 0;
}