// protectionlab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int** a, const int n, const int Low, const int High);
void Print(int** a, const int n);
void Create(int** a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = Low + rand() % (High - Low + 1);
}
void Input(int** a, const int m, const int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
}
void Print(int** a, const int n)
{

    cout << endl;

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n; j++)

            cout << setw(4) << a[i][j];

        cout << endl;

    }

    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int Low = 7;
    int High = 65;
    int n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
        a[i] = new int[n];
    Create(a, n, Low, High);
    Print(a, n);
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    return 0;


}

