// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"

using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int y, b;
	cout << "Impur number\n";
	cin >> y;
	b = (y / 10) % 10;
	//cout <<boolalpha<< (b % 2 == 0) << endl;
	//cout << (b % 2 != 1) << endl;
	((b % 2 == 0)||(y>=360)) ? (cout << "Parne") : (cout << "Neparne");
	*/
	int a, b;

	cout << "¬вед≥ть перше число\n";
	cin >> a;

	cout << "¬вед≥ть друге число\n";
	cin >> b;

	((a % 2 == 0) && (b % 2 == 0))/* || ((a % 2 != 0) && (b % 2 != 0)))*/ ? (cout << "ќбидва числа парн≥") : (cout << "„исла не парн≥");


}

