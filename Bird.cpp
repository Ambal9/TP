#include "Bird.h"

string Bird::get_obitanie()
{
	return this->obitanie;
}

void Bird::set_obitanie(string obitanie) 
{
	this->obitanie = obitanie;
}
string Bird::get_poroda()
{
	return this->poroda;
}

string Bird::get_okras()
{
	return this->okras;
}

string Bird::get_pitanie()
{
	return this->pitanie;
}

void Bird::set_poroda(string poroda)
{
	this->poroda = poroda;
}

void Bird::set_okras(string okras)
{
	this->okras = okras;
}

void Bird::set_pitanie(string pitanie)
{
	this->pitanie = pitanie;
}