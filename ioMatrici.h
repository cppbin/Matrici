#ifndef IOMATRICI_H_INCLUDED
#define IOMATRICI_H_INCLUDED
#define dmax 15
#include <iostream>
using namespace std;
void citireMatrice(int a[][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
           cout << "a["<<i<<"]["<<j<<"]=";
           cin >> a[i][j];
        }
}

void afisareMatrice(int a[][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void citireMatricePatrata(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
           cout << "a["<<i<<"]["<<j<<"]=";
           cin >> a[i][j];
        }
}

void afisareMatricePatrata(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}


#endif // IOMATRICI_H_INCLUDED
