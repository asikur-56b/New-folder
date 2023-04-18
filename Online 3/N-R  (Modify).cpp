#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int n;
double A[100];


double horners(double x)
{
    double b = 0;

    for(int i=0; i<=n; i++)
    {
        b = b*x + A[i];
    }
    return b;
}


double dv(double x)
{
    double value = 0;

    for(int i=0; i<n; i++)
    {
        value = value*x + (n-i)*A[i];
    }
    return value;
}

void deflat_eqn(double x)
{
    double q[n];

    q[0] = A[0];
    for(int i=1; i<=n; i++)
    {
        q[i] = (q[i-1]*x)+ A[i];
    }

    for(int i=0; i<=n; i++)
    {
        A[i] = q[i];
    }

    n--;
}


void modify_NR(double x)
{
    double x1;
    double e;
    int step = 0;
    int k = 1,itr = 0;

    cout << "Itr\tNumber Of Root\t\tApproximate Root"<<endl;
    while(n>1)
    {
        do
        {
            do
            {


                x1 = x - (horners(x)/dv(x));
                e = fabs(x1-x);
                x = x1;
                step++;
                if(step > 100)
                {
                    break;
                }
            itr++;

            }
            while(e > 0.001);

            cout <<itr <<"\t\t"<<k++<<"\t\t"<<x<<endl;
            deflat_eqn(x);

        }
        while(n>0);

    }

}

int main()
{

     cout << fixed << setprecision(6);
     double x;

     cout << "Enter The Highest Degree Of the Equation :" ;
     cin >> n;

        int m = n;
        cout << "Enter The Value Of Coefficient : " <<endl;
        for(int i = 0; i<=n; i++)
        {
            cout << "Coefficient x["<<m--<<"] =";
            cin >> A[i];

        }

    cout << "\nEnter the initial X:";
    cin >> x;
    modify_NR(x);

    getch();
}
