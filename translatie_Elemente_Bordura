#include <iostream>
#include <fstream>
#include <iomanip>
#define dmax 5

using namespace std;

ifstream f("matrice.txt");

void citireMatrice(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            f >> a[i][j];
}

void afisareMatrice(int a[][dmax], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
}

void transforma(int a[][dmax], int n)
{
    int i, j, x, y, z, t;

    x = a[0][n-1];
    //prima linie
    for(j = n-1; j >= 0; j--)
        a[0][j] = a[0][j-1];

    y = a[n-1][n-1];
    //ultima coloana
    for(i = n-1; i >= 1; i--)
        a[i][n-1] = a[i-1][n-1];
    a[1][n-1] = x;

    z = a[n-1][0];
    //ultima linie
    for(j = 0; j < n-1; j++)
        a[n-1][j] = a[n-1][j+1];
    a[n-1][n-2] = y;

    t = a[1][0];
    for(i = 0; i < n; i++)
        a[i][0] = a[i+1][0];
    a[n-1][0] = z;
}

int main()
{
    int a[dmax][dmax], n;
    f >> n;
    citireMatrice(a, n);
    afisareMatrice(a, n);
    transforma(a, n);
    cout << endl << "Matricea transformata:" << endl;
    afisareMatrice(a, n);
    return 0;
}
