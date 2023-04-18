#include<bits/stdc++.h>

#include<conio.h>

#define e 0.000001


using namespace std;

double f(double x)
{
    return 3*x-cos(x)-1;
}

double f_der(double x)
{
    return 3 +sin(x);
}


void N_R(double x0)
{
    double x1,r_error, ab_error,pre_root=1;
    int temp = 1;


    cout << "Itr \tRoot \t\tAbsolute Error \t\tRelative Error" << endl;
    do
    {

        if(f_der(x0) == 0.0)
        {
            cout << "Mathematical error." << endl;
            return;
        }


        x1 = x0 -  (f(x0) / f_der(x0));

        x0 = x1;


        ab_error= fabs(x1-pre_root);
        r_error = fabs((x1-pre_root)/x1);

        cout << temp << "\t";

        printf("%.5lf \t%.5lf \t\t%.5lf\n",x1, ab_error, r_error );

        temp ++;
        pre_root =  x1;

    }
    while(fabs(f(x1)) > e);


    cout <<endl << "  Root " << x1 <<endl;



}


int horner()
{
    int arr[]={3,1,-1};

    int x = 2;

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = arr[0];

    int res[n];

    res[0]=arr[0];

    for(int i =1;i<n;i++)
    {
        result = result*x + arr[i];
        res[i] = result;

    }
       cout << "Result Is :" << result <<endl<<endl;


    for(int i =0;i<n;i++)
    {
        cout << "P" <<i<< " is :"<<res[i]<<endl;

    }



}

int main()
{
    double x0;

    //guesses 2.

    cout << "Enter The Initial Guesses " << endl;

    cin >> x0 ;

    N_R(x0);
    horner();

    getch();
}













