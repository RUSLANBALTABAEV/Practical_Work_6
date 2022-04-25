// Practical_work_6_Task_2_Listing_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, m = 0;
	int max;
	cout << "Введите количество элементов: "; cin >> n;
	int* arr = new int(n);

	for (i = 0; i < n; i++)
	{
		cout << "Входить " << i << " элементов: "; cin >> arr[i];
	}

	for (i = 0, max = arr[0]; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			m = i;
		}
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = m;
		cout << arr[i] << " ";
	}

	system("pause");
	return 0;
}