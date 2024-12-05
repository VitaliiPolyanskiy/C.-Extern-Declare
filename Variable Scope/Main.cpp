#include <iostream>
#include "Variable Scope.h"

using namespace std;

void main()
{
	int z = 8; // локальная переменная
	cout << "Local variable: " << z << endl;
	function();
	function();
	extern int a; // внешнее объявление глобальной переменной a
	cout << "Global variable: " << a << endl; // обращение к глобальной переменной a
	extern int b; // внешнее объявление статической глобальной переменной b
	//cout << "Global static variable: " << b << endl; // ошибка на этапе компоновки
}