#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int x[10], y[10], p[10];
    int xp,f,n,j=1,f1=1,f2=0;
    cout << "Enter the number of observations:\n";
    cin >>  n;

    cout <<"\nEnter the different values of x:\n";
    for (int i=1;i<=n;i++)
    {
        cin >> x[i];
    }

      cout << "\nThe corresponding values of y are:\n";
     for (int i=1;i<=n;i++)
     {
        cin >> y[i];
     }

    f=y[1];
    cout << "\nEnter the value of 'k' in f(k) you want to evaluate:\n";
    cin >> xp;

    do
    {
        for (int i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(int i=1;i<=j;i++)
            {
                f1*=(xp-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }

    while(n!=1);
    f+=f2;

    printf("\nf(%d) = %d", xp , f);

    getch();
}






/*

Enter N: 5
5
150
7
392
11
1452
13
2366
17
5202

Enter the value of 'k' in f(k) you want to evaluate:
9
Xp :9Yp :810
*/
