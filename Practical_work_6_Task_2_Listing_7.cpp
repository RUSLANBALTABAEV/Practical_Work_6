// Practical_work_6_Task_2_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, n, S1;
	int a[100];
	cout << "Введите кол-во элементов: "; cin >> n;

	for (i = 0; i < 2 * n; ++i)
	{
		if (i % 2 == 0)
		{
			S1 = a[i] * a[i];
		}

		cout << "\n " << S1;
	}
	_getch();
	return 0;
}