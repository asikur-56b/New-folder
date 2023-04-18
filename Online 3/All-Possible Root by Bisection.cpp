#include<bits/stdc++.h>
#include<conio.h>

#define e 0.00001

using namespace std;

float A[100];

float maxRoot(int degree)
{
    float res = sqrt((pow((A[degree-1]/A[degree]),2 )) - 2* (A[degree-2] /A[degree]));

    return res;

}

float f(float root,int deg)
{
    float arr[deg+1];

    arr[deg] = A[deg] ;

    while (deg > 0)
    {

        arr[deg -1] = A[deg - 1] + arr[deg] * root;
        deg--;
    }

    return arr[deg];

}

void bisection(float a,float b,int n)
{

    float ds = 0.1,rel_e;
    float x1 = a, x2 = a + ds,xr;
    int cnt_root = 0,itr = 0;

    cout << "No of root "<<" Approximate Root "<< " Number of Iteration "<< "  Relative error "<< endl;

    while(x2 < b)
    {
        x1 = a;
        x2 = x1 + ds;

        if(f(x1,n)*f(x2,n) >0)
        {
            if( x2 < b)
            {
                a = x2;
            }
        }
        else
        {
            do
            {

                xr = (x1 + x2)/2;
                if(f(x1,n) *f(xr,n)< 0)
                {
                    x2 = xr;
                }
                else
                {
                    x1 = xr;
                }
               rel_e = fabs((x2 - x1)/x2);
            }while(rel_e > e);

            cout <<"  "<< ++cnt_root <<"\t     "<< xr <<"\t \t\t"<< itr <<"\t\t"<< rel_e << endl;
            if (x2 > b)
            {
                break;
            }

        }
           ++itr;
           a = x2;
    }

}

    int main()
    {
        cout << fixed << setprecision(6);

        float a,b;
        int n;

        cout << "Enter The Highest Degree Of the Equation :" ;
        cin >> n;

        cout << "Enter The Value Of Coefficient : " <<endl;
        for(int i = n; i>=0; i--)
        {
            cout << "Coefficient x["<<i<<"] =";
            cin >> A[i];

        }
        b = maxRoot(n);
        a = -1 * b;

        cout << "possible interval " << a << "and " <<b <<endl;

        bisection(a,b,n);

        getch();

    }
