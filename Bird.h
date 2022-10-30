#pragma once
#include "Animals.h"
#include <iostream>
using namespace std;
class Bird:public Animals
{
private:
	string obitanie;
	string pitanie;
public:
	string get_obitanie();
	string get_poroda() override;
	string get_okras() override;
	string get_pitanie();
	virtual void set_poroda(string) override;
	virtual void  set_okras(string) override;
	virtual void  set_pitanie(string);
	void  set_obitanie(string);
	Bird()
	{
		obitanie = '0';
		poroda = '0';
		okras = '0';
		pitanie = '0';
	}
	Bird(const Bird& bird)
	{
		poroda = bird.poroda;
		okras = bird.okras;
		pitanie = bird.pitanie;
		obitanie = bird.obitanie;

	}

    
};
