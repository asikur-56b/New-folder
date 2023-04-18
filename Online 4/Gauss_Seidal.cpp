#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "GAUSS SEIDEL\n";
    cout << "------------\n";

    int n;
    cout << "ENTER MATRIX ORDER: ";
    cin  >> n;

    double error = 0.00001;
    double a[n+1][n+1];
    double b[n+1];
    double result[n+1];
    double x[n+1];
    double x0[n+1];

    cout << "ENTER COEFFICIENT VALUES:\n";
    for(int k=1; k<=n; k++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << "[" << k << "][" << j << "] = ";
            cin  >> a[k][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        cout << "For equation " << i << " right side value: ";
        cin  >> b[i];
    }

    for(int i=1; i<=n; i++)
    {
        x0[i] = 0.0;
    }

    int itr;
    cout << "Enter number of iterations: ";
    cin  >> itr;

    for(int k=1; k<=itr; k++)
    {
        for(int i=1; i<=n; i++)
        {
            x[i] = (b[i] / a[i][i]);

            for (int j=1; j<=n; j++)
            {
                if(j == i)
                {
                    continue;
                }

                x[i] = x[i] - ((a[i][j] / a[i][i]) * x0[j]);
            }
        }

        for(int i=1; i<=n; i++)
        {
            x0[i] = x[i];
        }

        if(abs(x[k+1] - x[k])< error)
        {
            break;
        }
    }

    cout << "\nResult:\n";
    for(int i=1; i<=n; i++)
    {
        cout << "x" << i << "\t" << x[i] << "\n";
    }

    cout << endl;
}
