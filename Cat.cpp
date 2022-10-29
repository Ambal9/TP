#include "Cat.h"
#include "Animals.h"
string Cat::get_poroda()
{
	return this->poroda;
}

string Cat::get_okras()
{
	return this->okras;
}

string Cat::get_vladelec()
{
	return this->vladelec;
}

string Cat::get_klichka()
{
	return this->klichka;
}

void Cat::set_poroda(string poroda)
{
	this->poroda = poroda;
}

void Cat::set_okras(string okras)
{
	this->okras = okras;
}

void Cat::get_vladelec(string vladelec)
{
	this->vladelec = vladelec;
}

void Cat::get_klichka(string klichka)
{
	this->klichka = klichka;
}
