#pragma once

#include <iostream>
using namespace std;

class Animals
{    
protected:
	string poroda;
	string okras;

public: 
	//геттеры
	virtual string get_poroda() = 0;
	virtual string get_okras() = 0;


	// сеттеры

	virtual void set_poroda(string) = 0;
	virtual void  set_okras(string) = 0;



};

