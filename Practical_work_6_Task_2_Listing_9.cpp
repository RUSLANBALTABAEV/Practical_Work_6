// Practical_work_6_Task_2_Listing_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <ctime> 

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 10;

    int array[10];
    int a5[10];
    int a7[10];
    int aO[10];
    int f = 0, s = 0, o = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
    }

    cout << "Коли-во массивов: " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 5 == 0)
        {
            a5[f++] = array[i];
        }

        if (array[i] % 7 == 0)
        {
            a7[s++] = array[i];
        }

        if (array[i] % 5 != 0 && array[i] % 7 != 0)
        {
            aO[o++] = array[i];
        }
    }

    cout << "Числа кратные 5 " << endl;
    
    for (int i = 0; i < f; i++)
    {
        cout << a5[i] << " ";
    }

    cout << endl;

    cout << "Числа кратные 7 " << endl;

    for (int i = 0; i < s; i++)
    {
        cout << a7[i] << " ";
    }
    
    cout << endl;

    cout << "Остальные " << endl;
    
    for (int i = 0; i < o; i++)
    {
        cout << aO[i] << " ";
    }

    cout << endl;

    return 0;
}