#include "Set.h"
#define menu "1)Добавить\n2)Удалить\n3)Проверка на наличие\n4)Печать\n0)Выход\n"
int main()
{
	setlocale(LC_ALL, "Russian");
	Set s;
	unsigned menu_choice = 1;
	double value;
	while (menu_choice)
	{
		cout << menu;
		cin >> menu_choice;
		switch (menu_choice)
		{
		case 1:
			system("cls");
			cout << "Введите значение для добавления: ";
			cin >> value;
			(s.insert(int(value))) ? cout << "Значение " << int(value) << " добавлено" << endl : cout << "Значение " << int(value) << "существует" << endl;
			break;
		case 2:
			system("cls");
			cout << "Введите значение для удаления: ";
			cin >> value;
			(s.erase(int(value))) ? cout << "Значение " << int(value) << " удалено" << endl : cout << "Значения " << int(value) << " нет" << endl;
			break;
		case 3:
			system("cls");
			cout << "Введите значение для проверки на наличие: ";
			cin >> value;
			(s.find(int(value))) ? cout << "Значение " << int(value) << " есть" << endl : cout << "Значения " << int(value) << " нет" << endl;
			break;
		case 4:
			system("cls");
			cout << "Множество:\n";
			cout << s;
			cout << endl;
			break;
		case 0:
			system("cls");
			break;
		}
	}
	return 0;
}
