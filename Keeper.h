#pragma once
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"
#include <iostream>
using namespace std;
class Keeper
{
private:
	
	int sizefish = 1,sizebird = 1,sizecat = 1;
	int size;
	Fish* f;
	Bird* b;
	Cat* c;
	
	

public:
	void add_fish(Fish);
	void add_bird(Bird);
	void add_cat(Cat);
	void info_fish();
	void info_bird();
	void info_cat();
	~Keeper()
	{
		delete[] f;
		delete[] b;
		delete[] c;
	}
};

