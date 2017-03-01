#pragma once
#include <iostream>
#include "Map.h"
using namespace std;

int main()
{
	Map map1 = Map(3);
	Player player = Player();
	char temp;
	bool notDone = true;
	cout << to_string(map1.getSize()) << endl;
	cout << map1.getCurrent().GetName() << endl;
	while (notDone)
	{
		cin >> temp;
		notDone = map1.goDirection(temp, player.GetLvl());
		cout << map1.getCurrent().GetName() << endl;
	}
	return 0;
}