// Practical_work_6_Task_2_Listing_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define n 5
#define m 20

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time_t(0));
	int a[n], b[m], i;
	cout << "Массив n: ";
	
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10 - 5;
		cout << "\nn: " << a[i];
	}

	cout << "Массив m: ";

	for (i = 0; i < m; i++) {
		b[i] = rand() % 15 - 5;
		cout << "\nm: " << b[i];
	}

	int j, count;
	for (i = 0; i < n; i++) 
	{
		count = 0;
		for (j = 0; j < m; j++) 
		{
			if (a[i] == b[j])
				count++;
		}
		
		if (count > 0)
		{
			cout << "\nв массиве m - это  раз " << a[i] << count;
		}
	}

	_getch();
	return 0;
}