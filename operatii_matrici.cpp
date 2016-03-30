// adunare, scadere, inmultire matrici
#include <iostream>
#define dmax 10
using namespace std;

void citireMatrice(int a[dmax][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
           cin >> a[i][j];
}

void afisareMatrice(int a[dmax][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void produsMatrici(int a[dmax][dmax], int b[dmax][dmax], int c[dmax][dmax], int n)
{
    int i, j, k;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main()
{
    int a[dmax][dmax], b[dmax][dmax], c[dmax][dmax];
    int n;
    cout << "n = "; cin >> n;
    citireMatrice(a, n);
    cout << endl;
    citireMatrice(b, n);
    produsMatrici(a, b, c, n);
    cout << endl << "Produsul: " << endl;
    afisareMatrice(c, n);
    return 0;
}
