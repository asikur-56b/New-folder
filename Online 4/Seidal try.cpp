#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "GAUSS SEIDEL\n";
    cout << "------------\n";

    int n;
    double a[n+1][n+1];
    double b[n+1];




    cout << "ENTER MATRIX ORDER: ";
    cin  >> n;
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

    do{



    }





