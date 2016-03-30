/** Data fiind o matrice de m x n cu elemente doar 0 si 1
se considera ca o linie reprezinta scrierea in baza 2 a
unui numar.
Sa se afiseze numerele din baza 10 reprezentate de liniile
matricei
Ex:
1 0 0 1 0
0 1 1 1 0
1 1 1 1 1
se va afisa 18 14 31
 **/

#include <iostream>
#include <math.h>
#define dmax 10
using namespace std;

void citireMatrice(int a[dmax][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
          do{
              cout << "a["<<i<<"]["<<j<<"]=";
              cin >> a[i][j];
          }while(a[i][j] != 0 && a[i][j] != 1);

        }
}

void afisareMatrice(int a[dmax][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void transforma(int a[dmax][dmax], int n, int m)
{
    int i, j, k;
    int s;
    for(i = 0; i < n; i++)
    {
        s = 0;
        k = 0;
        for(j = m-1; j >= 0; j--)
        {
            s += a[i][j]*pow(2, k);
            k++;
        }
        cout << s << " ";
    }
}

int main()
{
    int a[dmax][dmax], n, m;
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    citireMatrice(a, n, m);
    transforma(a, n, m);
    return 0;
}
