#include<bits/stdc++.h>
#include<conio.h>
#define e 0.000001

using namespace std;

double f(double x)
{
    return x*x*x-4*x*x+x+6;
}

double g(double x)
{

    return  4*x*x-x*x*x-6;

}


double  fixed(double x0)
{
    double x1,r_error, ab_error,pre_root=1;
    int step = 1,N=10,temp=1;


    cout << "Itr \tRoot \t\tAbsolute Error \t\tRelative Error" << endl;
    do
    {

        x1 = g(x0);
        step = step +1;
        if(step > N)
        {
           cout << "Not Convergent.";
           exit(0);
        }

         x0 = x1;

        ab_error= fabs(x1-pre_root);
        r_error = fabs((x1-pre_root)/x1);

        cout << temp << "\t";

        printf("%.5lf \t%.5lf \t\t%.5lf\n",x1, ab_error, r_error );
        temp ++;
        pre_root=x1;


    }
    while(fabs (f(x1)) > e);

    cout << "Root " << x1 << endl;

}

int horner()
{

    int arr[] = {1,-4,1,6};
    int x = 2;

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = arr[0];
    int res[n] ;

    res[0] = arr[0];

    for(int i =1;i<n;i++)
    {

        result = result *x  + arr[i];

        res[i] = result;

    }

    for(int i=0;i<n;i++)
    {

        cout << "P" <<i<< " is:" <<res[i]<<endl;

    }

}

int main()
{
    double x0;

   // guess 1

    cout << "Enter The Initial Guesses " << endl;

    cin >> x0 ;

    fixed(x0);

    horner();

    getch();
}

