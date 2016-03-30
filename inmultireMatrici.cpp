//inmultirea a doua matrici
#include <iostream>
#define dmax 10
using namespace std;

void citireMatrice(int a[dmax][dmax], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
           cin >> a[i][j];
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

void produsMatrici(int a[dmax][dmax], int b[dmax][dmax], int c[dmax][dmax], int m, int n, int p)
{
    int i, j, k;
    for(i = 0; i < m; i++)
        for(j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main()
{
    int a[dmax][dmax], b[dmax][dmax], c[dmax][dmax];
    int m, n, p;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    cout << "p = "; cin >> p;
    citireMatrice(a, m, n);
    cout << endl;
    citireMatrice(b, n, p);
    produsMatrici(a, b, c, m, n, p);
    cout << endl << "Produsul: " << endl;
    afisareMatrice(c, m, p);
    return 0;
}
