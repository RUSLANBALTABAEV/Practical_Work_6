// Practical_work_6_Task_2_Listing_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

const int n = 10;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[n] = { -6,-5,-3,-2,-1,0,1,2,3,4 };

	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
		{
			array[i] *= array[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << ' ';
	}

	cout << endl;

	_getch();
	return 0;
}