/** data fiind o matrice n x m intr-un fisier
text matrice.in, sa i se construiasca transpusa
**/

#include <iostream>
#include <fstream>
#include "ioMatrici.h"
#define dmax 15
using namespace std;

ifstream f("matrice.in");

void citireFisier(int a[][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
           f >> a[i][j];
}

void construiesteTranspusa(int a[][dmax], int n, int m, int b[][dmax])
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            b[j][i] = a[i][j];
}

int main()
{
    int a[dmax][dmax], b[dmax][dmax], n, m;
    f >> n;
    f >> m;
    citireFisier(a, n, m);
    afisareMatrice(a, n, m);
    construiesteTranspusa(a, n, m, b);
    cout << endl << "Matricea transpusa:"<<endl;
    afisareMatrice(b, m, n);
    return 0;
}
