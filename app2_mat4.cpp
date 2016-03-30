#include <iostream>
#include "ioMatrici.h"
#define dmax 15

using namespace std;

void constructie(int a[][dmax], int m, int n)
{
    int i, j, k = m * n;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
           a[i][j] = k;
           k--;
        }
}

int main()
{
    int a[dmax][dmax], m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    constructie(a, m, n);
    afisareMatrice(a, m, n);
    return 0;
}
