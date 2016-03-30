/** Sortati prima linie a unei matrici de dimensiune n x m
prin interschimbare de coloane

6 1 3 2 4
1 9 8 3 2
4 1 2 5 0

matricea finala:
1 2 3 4 6
9 3 8 2 1
1 5 2 0 4

**/

#include <iostream>
#include "ioMatrici.h"
#define dmax 15

using namespace std;

void sortarePrimaLinie(int a[][dmax], int n, int m)
{
    int j, k, i, aux;
    for(j = 0; j < m-1; j++)
        for(k = j+1; k < m; k++)
          if(a[0][j] > a[0][k])
               for(i = 0; i < n; i++)
               {
                  aux = a[i][j];
                  a[i][j] = a[i][k];
                  a[i][k] = aux;
               }
}

int main()
{
    int a[dmax][dmax], n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    citireMatrice(a, n, m);
    afisareMatrice(a, n, m);
    sortarePrimaLinie(a, n, m);
    cout << endl << "Matricea finala:"<<endl;
    afisareMatrice(a, n, m);
    return 0;
}
