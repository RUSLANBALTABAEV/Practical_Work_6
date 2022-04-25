// Practical_work_6_Task_2_Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 4;
	int array[n] = { 8,16,32 };
	
	for (int i = 0; i < n; i++)
	{
		cout << "Введите 17 значений: \n";  cin >> array[i];
	}

	int array_1[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите 17 значений: \n"; cin >> array_1[i];
	}

	const int s = 2;
	
	for (int i = 0; i < n; i++)
	{
		array_1[i] = array[i] / s;
		cout << endl;
	}

	cout << "Результат: \n" << array_1[n] << endl;
	
	_getch();
	return 0;
}