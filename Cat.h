#include "Animals.h"
#include <iostream>
using namespace std;
class Cat : public Animals
{
private:
	string vladelec;
	string klichka;
public:
	string get_poroda() override;
	string get_okras() override;
	string get_vladelec();
	string get_klichka();
	virtual void set_poroda(string) override;
	virtual void  set_okras(string) override;
	void get_vladelec(string);
	void get_klichka(string);
	Cat()
	{
		poroda = '0';
		okras = '0';
		vladelec='0';
		klichka='0';
	}

	


};
