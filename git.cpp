#include <iostream>
#include <ctime>
#include <iomanip>
#include <locale.h>
#include <Windows.h>
#include <string>
using namespace std;

int new1(int a, int b, int c)
{
    return a*b+c;
}

int main()
{
	while(true)
	{
		int a, b , c;
		setlocale(0, "");
		cout << "Введите 3 числа." << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "Ответ: " << new1(a,b,c) << endl;
		cout << "Вы хотите выйти ?\nЕсли да введите 1\n";
		cin >> a;
		if (a == 1)
			break;
	}
		return 0;
}
