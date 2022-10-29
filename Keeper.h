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
	Fish* f=new Bird[sizebird];
	Bird* b= new Bird[sizebird];
	Cat* c= new Cat[sizecat];
	Fish q;
	Bird w;
	Cat e;
	

public:
	void add_fish(Fish);
	void add_bird(Bird);
	void add_cat(Cat);
	void info_fish();
	void info_bird();
	void info_cat();
	void save_fish();
	void read_fish();
	void save_bird();
	void read_bird();
	void save_cat();
	void read_cat();
	~Keeper()
	{
		delete[] f;
		delete[] b;
		delete[] c;
	}
};

