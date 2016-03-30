#include <iostream>
#include "ioMatrici.h"
#define dmax 15
using namespace std;

void constructie(int a[][dmax], int n, int m)
{
    int i, j, k = 1;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            for(j = 0; j < m; j++)
            {
                a[i][j] = k;
                k++;
            }
        else
            for(j = m-1; j>= 0; j--)
            {
                a[i][j] = k;
                k++;
            }
    }
}

int main()
{
    int n, m, a[dmax][dmax];
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    constructie(a, n, m);
    afisareMatrice(a, n, m);
    return 0;
}
