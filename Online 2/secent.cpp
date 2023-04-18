#include<bits/stdc++.h>

#include<conio.h>

#define e 0.000001


using namespace std;

double f(double x)
{
    return x*x*x - 2*x -5;

}

void Secent(double x0,double x1)
{
    double x2,r_error, ab_error,pre_root=1;

    int temp = 1;

    cout << "Itr \tRoot \t\tAbsolute Error \t\tRelative Error" << endl;
    do
    {
        x2 = x1 - ((f(x1)*(x1-x0)) / (f(x1) - f(x0)));
        x0 = x1;
        x1 = x2;

        ab_error= fabs(x2-pre_root);
        r_error = fabs((x2-pre_root)/x2);

        cout << temp << "\t";

        printf("%.5lf \t%.5lf \t\t%.5lf\n",x2, ab_error, r_error );
        temp ++;
        pre_root=x2;

    }
    while(fabs(f(x2)) >e);

    cout << "Root :" << " " << x2 << endl;

}


int horner()
{
    int arr[]={1,-2,-5};

    int x = 2;

    int n = sizeof(arr)/sizeof(arr[0]);

    int result = arr[0];

    int res[n];

    res[0] = arr[0];

    for(int i = 1;i<n;i++)

    {

        result = result*x + arr[i];

        res[i] = result;

    }

    for(int i = 0;i<n;i++)
    {

        cout << "P" <<i<<" is:" <<res[i]<<endl;

    }

}



int main()
{

    double x0,x1;


    // Guesses Will Be 0,1

    cout << "Enter The Initial Guesses." << endl;

    cin >> x0 >> x1;

    Secent(x0,x1);
    horner();
    getch();
}




