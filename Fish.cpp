#include "Fish.h"
#include "Animals.h"
#include <iostream>
using namespace std;


string Fish::get_poroda()
{
	return this->poroda;
}

string Fish::get_okras()
{
	return this->okras;
}

string Fish::get_pitanie()
{
	return this->pitanie;
}

void Fish::set_poroda(string poroda)
{
	this->poroda = poroda;
}

void Fish::set_okras(string okras)
{
	this->okras = okras;
}

void Fish::set_pitanie(string pitanie)
{
	this->pitanie = pitanie;
}


