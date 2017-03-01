#include "Map.h"
#include <ctime>
#include <random>


void Map::setCurrent(int lvl)
{
	if (current.GetisSet() == false)
	{
		srand(time(NULL));
		int rand1 = rand() % 1033;
		int rand2 = rand() % 776;

		current.SetPlace(lvl, rand1, rand2);
	}
}

Map::Map(int size)
{
	if (size < 0) 
	{
		mapSize = 3;
	}
	else
	{
		mapSize = size;
	}

	
	for (int i = 0; i < (mapSize*mapSize); i++)
	{
		map.push_back(Place());
	}
	start =map[(mapSize * (mapSize / 2)) + (mapSize / 2 + 1)];
	current = start;
}

int Map::getSize()
{
	return mapSize;
}

Place Map::getCurrent()
{
	return current;
}

bool Map::goDirection(char d)
{
	switch (d) {
	case 'n':
		if (currentLocation < mapSize)
		{
			return false;
		}
		else
		{
			currentLocation -= mapSize;
			current = map[currentLocation];
			return true;
		}
	case 's':
		if (currentLocation > mapSize * (mapSize - 1))
		{
			return false;
		}
		else
		{
			currentLocation += mapSize;
			current = map[currentLocation];
			return true;
		}
	case 'e':
		if ((currentLocation + 1) % mapSize == 0)
		{
			return false;
		}
		else
		{
			currentLocation++;
			current = map[currentLocation];
			return true;
		}
	case 'w':
		if ((currentLocation - 1) % mapSize == mapSize - 1)
		{
			return false;
		}
		else
		{
			currentLocation--;
			current = map[currentLocation];
			return true;
		}

			
	}
}




Map::~Map()
{
}
