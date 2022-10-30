#pragma once
#include "Animals.h"
#include <iostream>
using namespace std;
class Fish: public Animals
{
private:
	string pitanie;
public:
	Fish()
	{
		poroda = '0';
		okras = '0';
		pitanie = '0';
	}
	Fish(const Fish& fish)
	{
		poroda = fish.poroda;
		okras = fish.okras;
		pitanie = fish.pitanie;
	}
	string get_poroda() override;
	string get_okras() override;
	string get_pitanie();
	virtual void set_poroda(string) override;
	virtual void  set_okras(string) override;
	virtual void  set_pitanie(string);
};

