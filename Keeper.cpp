#include "Keeper.h"
#include <iostream>
#include <string>

using namespace std;
 
void Keeper::add_fish(Fish fish)
{
	Fish* p = new Fish[sizefish];
	p[sizefish - 1] = fish;
	Fish* pp = new Fish[sizefish];
	for (size = 0; size <= sizefish - 2; size++)
	{
		pp[size] = f[size];
	}
	pp[sizefish - 1] = p[sizefish - 1];
	delete[] f;
	f = new Fish[sizefish];
	for (size = 0; size <= sizefish - 1; size++)
	{
		f[size] = pp[size];
	}
	delete[] p;
	delete[] pp;
	sizefish++;

}
void Keeper::add_bird(Bird bird)
{
	Bird* p = new Bird[sizebird];
	p[sizebird - 1] = bird;
	Bird* pp = new Bird[sizebird];
	for (size = 0; size <= sizebird - 2; size++)
	{
		pp[size] = b[size];
	}
	pp[sizebird - 1] = p[sizebird - 1];
	delete[] b;
	b = new Bird[sizebird];
	for (size = 0; size <= sizebird - 1; size++)
	{
		b[size] = pp[size];
	}
	delete[] p;
	delete[] pp;
	sizebird++;

}
void Keeper::add_cat(Cat cat)
{
	Cat* p = new Cat[sizecat];
	p[sizecat - 1] = cat;
	Cat* pp = new Cat[sizecat];
	for (size = 0; size <= sizecat - 2; size++)
	{
		pp[size] = c[size];
	}
	pp[sizecat - 1] = p[sizecat - 1];
	delete[] c;
	c = new Cat[sizecat];
	for (size = 0; size <= sizecat - 1; size++)
	{
		c[size] = pp[size];
	}
	delete[] p;
	delete[] pp;
	sizecat++;
}


void Keeper::info_fish()
{   
	for (size = 0; size <= sizefish - 2; size++)
	{
		cout<<"Рыба "<<size+1<<": " << f[size].get_poroda() <<", "<<f[size].get_okras()<<", "<<f[size].get_pitanie()<<endl;
	}
	
}
void Keeper::info_bird()
{
	for (size = 0; size <= sizebird - 2; size++)
	{
		cout << "Птица " << size + 1 << ": " << b[size].get_poroda() << ", " << b[size].get_okras() << ", " << b[size].get_pitanie() << ", " << b[size].get_obitanie() << endl;
	}

}
void Keeper::info_cat()
{
	for (size = 0; size <= sizecat - 2; size++)
	{
		cout << "Кот " << size + 1 << ": " << c[size].get_poroda() << ", " << c[size].get_okras() << ", " << c[size].get_vladelec() << ", " << c[size].get_klichka() << endl;
	}

}

