#include <iostream>
#include "ioMatrici.h"
#define dmax 15
using namespace std;

void constructie(int a[][dmax], int m, int n)
{
    int i, j;
    //prima linie
    for(j = 0 ; j < n; j++)
        a[0][j] = j+1;
    //prima coloana
    for(i = 0; i < m; i++)
        a[i][0] = i+1;
    //restul elementelor
    for(i = 1; i < m; i++)
        for(j = 1; j < n; j++)
                a[i][j] = a[i-1][j] + a[i][j-1];
}

int main()
{
    int n, m, a[dmax][dmax];
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    constructie(a, m, n);
    afisareMatrice(a, m, n);
    cout << endl;
    cout << a[m-1][n-1];
    return 0;
}
