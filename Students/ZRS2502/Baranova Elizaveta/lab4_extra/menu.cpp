#include <iostream> 
#include <conio.h>
#include <cstdlib>
using namespace std;


void showMenu();

int main()
{
	int i;
	do {
		showMenu();
		i = _getch();
		switch (i)
		{
		case 48: break;
		case 49: 
			system("cls"); 
			system("..\\x64\\Debug\\project1.exe"); 
			break;
		case 50: 	
			system("cls"); 
			system("..\\x64\\Debug\\project2.exe"); 
			break;
		case 51: 
			system("cls"); 
			system("..\\x64\\Debug\\project3.exe"); 
			break;
		case 52: 
			system("cls"); 
			system("..\\x64\\Debug\\project4.exe"); 
			break;
		case 53: 
			system("cls"); 
			system("..\\x64\\Debug\\project5.exe");
			break;
			break;
		}
	} while (i != 48);
	return 0;
}
void showMenu() {
	system("cls");
	setlocale(LC_ALL, "rus");
	cout << "Выберите подходящее значение " << endl
		<< "0. Выход" << endl
		<< "1. Проект 1. Валидация пользовательского ввода." << endl
		<< "2. Проект 2" << endl
		<< "3. Проект 3. Использование шаблона функции" << endl
		<< "4. Проект 4. Использование inline функции." << endl
		<< "5. Проект 5" << endl;

}
