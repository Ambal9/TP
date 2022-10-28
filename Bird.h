#pragma once
#include "Fish.h"
#include <iostream>
using namespace std;
class Bird:public Fish
{
private:
	string obitanie;
public:
	string get_obitanie();
	void  set_obitanie(string);

};
