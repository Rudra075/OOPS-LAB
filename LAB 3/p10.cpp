#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int **a = new int*[m];
    int **b = new int*[m];
    int **c = new int*[m];

    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        b[i] = new int[n];
        c[i] = new int[n];
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Resultant Matrix:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
        delete[] b[i];
        delete[] c[i];
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}