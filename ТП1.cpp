#include <Windows.h>
#include <string>
#include <iostream>
#include "Animals.h"
#include "Fish.h"
#include "Bird.h"
#include "Keeper.h"
#include <conio.h>

int main()
{
	void menu(HANDLE con, int flag);
	int i = 0;
	char flag = '0';
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "rus");
	string vvod;
	Keeper keeper;
	Fish fish;
	Bird bird;
	Cat cat;
	


	while (i != 15)
	{

		menu(hConsole, i);
		do
		{
			flag = _getch();
			if (flag == 's')
			{
				if (i < 14)
					i++;
				menu(hConsole, i);
			}
			else if (flag == 'w')
			{
				if (i > 0)
					i--;
				menu(hConsole, i);
			}
		} while (flag != ' ');
		if (flag == ' ')
		{
			switch (i) {
			case 0:
				cout << "Введите породу рыбы:" << endl;
				getline(cin, vvod);
				fish.set_poroda(vvod);
				cout << "Введите окрас рыбы:" << endl;
				getline(cin, vvod);
				fish.set_okras(vvod);
				cout << "Введите тип питания рыбы:" << endl;
				getline(cin, vvod);
				fish.set_pitanie(vvod);
				keeper.add_fish(fish);
				cout << "Рыба сохранена" << endl;
				system("pause");

				break;
			case 1:
				cout << "Введите породу Птицы:" << endl;
				getline(cin, vvod);
				bird.set_poroda(vvod);
				cout << "Введите окрас Птицы:" << endl;
				getline(cin, vvod);
				bird.set_okras(vvod);
				cout << "Введите чем питается Птица:" << endl;
				getline(cin, vvod);
				bird.set_pitanie(vvod);
				cout << "Введите обитание Птицы:" << endl;
				getline(cin, vvod);
				bird.set_obitanie(vvod);
				keeper.add_bird(bird);
				cout << "Птица сохранена" << endl;
				system("pause");

				break;
			case 2:

				cout << "Введите породу кота:" << endl;
				getline(cin, vvod);
				cat.set_poroda(vvod);
				cout << "Введите окрас кота:" << endl;
				getline(cin, vvod);
				cat.set_okras(vvod);
				cout << "Введите владельца кота:" << endl;
				getline(cin, vvod);
				cat.get_vladelec(vvod);
				cout << "Введите кличку кота:" << endl;
				getline(cin, vvod);
				cat.get_klichka(vvod);
				keeper.add_cat(cat);
				cout << "кот сохранена" << endl;
				system("pause");

				break;

			case 3:
				keeper.del_fish();

				break;
			case 4:
				keeper.del_bird();

				break;
			case 5:
				keeper.del_cat();

				break;

			case 6:
				keeper.info_fish();
				system("pause");



				break;
			case 7:
				keeper.info_bird();
				system("pause");



				break;
			case 8:
				keeper.info_cat();
				system("pause");
				break;


			case 9:
				keeper.save_fish();
				system("pause");
				break;
			case 10:

				keeper.read_fish();
				system("pause");

				break;
			case 11:
				keeper.save_bird();
				system("pause");
				break;
			case 12:

				keeper.read_bird();
				system("pause");

				break;
			case 13:
				keeper.save_cat();
				system("pause");
				break;
			case 14:

				keeper.read_cat();
				system("pause");

				break;
			}
			
			system("cls");
		}
	}
}
	void menu(HANDLE con, int flag) 
	{
		WORD w = FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN |
			FOREGROUND_RED;
		WORD b = FOREGROUND_BLUE;
		system("cls");
		cout << "Управление: Вверх/Вниз - w/s" << endl << " Выбор пункта -пробел" << endl << endl;
		cout << " Гавное меню" << endl << endl << endl;
		if (flag == 0) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "1.Добавление информации о рыбе" << endl;
		if (flag == 1) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "2.Добавление информации о птице" << endl;
		if (flag == 2) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "3.Добавление информации о Коте" << endl;
		if (flag == 3) SetConsoleTextAttribute(con, b);

		else SetConsoleTextAttribute(con, w);
		cout << "4.Удаление последней рыбы" << endl;
		if (flag == 4) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "5.удаление последней Птицы" << endl;
		if (flag == 5) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "6.удаление последнего кота" << endl;
		if (flag == 6) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "7.Вывод информации о рыбах" << endl;
		if (flag == 7) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "8.Вывод информации о Птицах" << endl;
		if (flag == 8) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "9.Вывод информации о котах" << endl;
		if (flag == 9) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "10.Сохранение списка рыб в файл" << endl;
		if (flag == 10) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "11.Загрузка списка о рыбах из файл" << endl;
		if (flag == 11) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "12.Сохранение списка Птиц в файл" << endl;
		if (flag == 12) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "13.Загрузка списка о Птицах из файл" << endl;
		if (flag == 13) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "14.Сохранение списка Котов в файл" << endl;
		if (flag == 14) SetConsoleTextAttribute(con, b);
		else SetConsoleTextAttribute(con, w);
		cout << "15.Загрузка списка о Котах из файл" << endl;



		SetConsoleTextAttribute(con, w);
	}

