// Practical_work_6_Task_2_Listing_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector <int> a;
	int num, n, min_e;
	cout << "n: "; cin >> n;

	for (int i = 0; i < n; ++i)
	{
		num = 1 + rand() % 9;
		a.push_back(num);
	}

	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	cout << "Обратный: ";
	reverse(a.begin(), a.end());

	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	min_e = *min_element(a.begin(), a.end());
	cout << "Мин: " << min_e;

	_getch();
	return 0;
}
