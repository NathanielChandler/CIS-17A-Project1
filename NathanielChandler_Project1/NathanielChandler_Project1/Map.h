#pragma once
#include "Place.h"
#include <vector>

class Map
{
private:
	Place start;
	Place current;
	vector<Place> map;
	int mapSize;
	int currentLocation;
	void setCurrent(int);
public:
	Map(int);
	int getSize();
	Place getCurrent();
	bool goDirection(char);
	~Map();
};

