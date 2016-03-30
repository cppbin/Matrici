#include <iostream>
#include "ioMatrici.h"
#define dmax 15

using namespace std;

int numaraDivizori(int x)
{
    int i, k = 0;
    for(i = 1; i <= x; i++)
        if(x % i == 0)
           k++;
    return k;
}

void transforma(int a[][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            a[i][j] = numaraDivizori(a[i][j]);
}

int main()
{
    int a[dmax][dmax], n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    citireMatrice(a, n, m);
    cout << endl << "Matricea initiala: "<<endl;
    afisareMatrice(a, n, m);
    transforma(a, n, m);
    cout << endl << "Matricea finala: "<<endl;
    afisareMatrice(a, n, m);
    return 0;
}
