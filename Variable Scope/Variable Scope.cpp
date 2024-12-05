#include <iostream>

using namespace std;

int a = 5; // определение глобальной переменной
static int b = 5; // определение статической глобальной переменной

void function()
{
	a += 2; // обращение к глобальной переменной a
	b += 2; // обращение к статической глобальной переменной b
	cout << "Global variable: " << a << endl;
	cout << "Global static variable: " << b << endl;
}

