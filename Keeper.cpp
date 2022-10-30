#include "Keeper.h"
#include <iostream>
#include <string>
#include <fstream>

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
	if (sizefish == 1)
	{
		for (size = 0; size <= sizefish - 1; size++)
		{
			
			cout << "Рыба " << size + 1 << ": Порода: " << f[size].get_poroda() << ", Окрас: " << f[size].get_okras() << ", Тип питания: " << f[size].get_pitanie() << endl;
		}
	}
	else {
		for (size = 0; size <= sizefish - 2; size++)
		{
			
			cout << "Рыба " << size + 1 << ": Порода: " << f[size].get_poroda() << ", Окрас: " << f[size].get_okras() << ", Тип питания: " << f[size].get_pitanie() << endl;
		}
	}
}
void Keeper::info_bird()
{
	if (sizebird == 1)
	{
		for(size=0;size<=sizebird-1;size++)
			cout << "Птица " << size + 1 << ": Порода: " << b[size].get_poroda() << ", Окрас: " << b[size].get_okras() << ", Питание: " << b[size].get_pitanie() << ", Обитание: " << b[size].get_obitanie() << endl;
	}
	for (size = 0; size <= sizebird - 2; size++)
	{
		cout << "Птица " << size + 1 << ": Порода: " << b[size].get_poroda() << ", Окрас: " << b[size].get_okras() << ", Питание: " << b[size].get_pitanie() << ", Обитание: " << b[size].get_obitanie() << endl;
	}

}
void Keeper::info_cat()
{
	if (sizecat == 1)
	{
		for (size = 0; size <= sizecat - 1; size++)
			cout << "Кот " << size + 1 << ": Порода: "<< c[size].get_poroda() << ", Окрас: " << c[size].get_okras() << ", Владелец: " << c[size].get_vladelec() << ", Кличка: " << c[size].get_klichka() << endl;
	}
	for (size = 0; size <= sizecat - 2; size++)
	{
		cout << "Кот " << size + 1 << ": Порода: " << c[size].get_poroda() << ", Окрас: " << c[size].get_okras() << ", Владелец: " << c[size].get_vladelec() << ", Кличка: " << c[size].get_klichka() << endl;
	}

}

void Keeper::save_fish() 
{
	ofstream fout;

	fout.open("fish.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}
	for(size=size_f-1;size<=sizefish-2;size++)
	fout.write((char*)&f[size], sizeof(Fish));
	size_f = sizefish;
	fout.close();
}

void Keeper::read_fish()
{
	ifstream fin;
	
	fin.open("fish.txt");
	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}

	while (fin.read((char*)&q, sizeof(Fish)))
	{
		Fish* p = new Fish[sizefish];
		p[sizefish - 1] = q;
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
		

	fin.close();
}
void Keeper::save_bird()
{
	ofstream fout;

	fout.open("bird.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}
	for (size = size_b-1; size <= sizebird - 2; size++)
		fout.write((char*)&b[size], sizeof(Bird));
	size_b = sizebird;
	fout.close();
}

void Keeper::read_bird()
{
	ifstream fin;

	fin.open("bird.txt");
	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}

	while (fin.read((char*)&w, sizeof(Bird)))
	{
		Bird* p = new Bird[sizebird];
		p[sizebird - 1] =w;
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




	fin.close();
}
void Keeper::save_cat()
{
	ofstream fout;

	fout.open("cat.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}
	for (size = size_c-1; size <= sizecat - 2; size++)
		fout.write((char*)&c[size], sizeof(Cat));
	size_c = sizecat;
	fout.close();
}

void Keeper::read_cat()
{
	ifstream fin;

	fin.open("cat.txt");
	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла" << endl;

	}

	while (fin.read((char*)&e, sizeof(Cat)))
	{
		Cat* p = new Cat[sizecat];
		p[sizecat - 1] = e;
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


	fin.close();
}
void Keeper::del_fish()
{
	if (sizefish > 1)
	{
		Fish* p = new Fish[sizefish];
		for (size = 0; size <= sizefish - 2; size++)
		{
			p[size] = f[size];
		}
		sizefish--;
		delete[] f;
		f = new Fish[sizefish];
		for (size = 0; size <= sizefish - 2; size++)
		{
			f[size] = p[size];
		}
		delete[] p;
	}
}
void Keeper::del_bird()
{
	if (sizebird > 1)
	{
		Bird* p = new Bird[sizebird];
		for (size = 0; size <= sizebird - 2; size++)
		{
			p[size] = b[size];
		}
		sizebird--;
		delete[] b;
		b = new Bird[sizebird];
		for (size = 0; size <= sizebird - 2; size++)
		{
			b[size] = p[size];
		}
		delete[] p;
	}
}
void Keeper::del_cat()
{
	if (sizecat > 1)
	{
		Cat* p = new Cat[sizecat];
		for (size = 0; size <= sizecat - 2; size++)
		{
			p[size] = c[size];
		}
		sizecat--;
		delete[] c;
		c = new Cat[sizecat];
		for (size = 0; size <= sizecat - 2; size++)
		{
			c[size] = p[size];
		}
		delete[] p;
	}

}


