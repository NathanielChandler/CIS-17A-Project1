#pragma once
#include <iostream>
#include "Map.h"
using namespace std;

int main()
{
	Map map1 = Map(3);

	cout << to_string(map1.getSize()) << endl;
	cout << map1.getCurrent().GetName() << endl;
	return 0;
}