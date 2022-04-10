#include "Set.h"
#define menu "1)+\n2)-\n3)find\n4)print\n0)esc\n"
int main()
{
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
			cout << "+: ";
			cin >> value;
			(s.insert(int(value))) ? cout << "value " << int(value) << " added" << endl : cout << "value " << int(value) << "exist" << endl;
			break;
		case 2:

		case 3:

		case 4:

		case 0:
			system("cls");
			break;
		}
	}
	return 0;
}
