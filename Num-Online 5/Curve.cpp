
// Y = ax^b;

#include<bits/stdc++.h>


using namespace std;

void Curve_Fitting_Algorithm()
{
    cout<<"Enter the number of input"<<endl;
    int n;
    cin>>n;

    double x[n],y[n],A;


    double sumX = 0,sumX2 = 0,sumY = 0,sumXY = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> x[i];
        cin >> y[i];

        sumX = sumX + log(x[i]);

        sumX2 = sumX2 +(log(x[i])*log(x[i]));

        sumY = sumY + log(y[i]);

        sumXY = sumXY + (log(x[i])*log(y[i]));
    }

    double b = (((n*sumXY)-(sumX*sumY))/((n*sumX2)-(sumX*sumX)));
    double a = (sumY-(b*sumX))/n;

    A = exp(a);


    cout<<"a is :"<<A<<endl;
    cout<<"b is :"<<b<<endl;

    cout <<endl<<endl;

    cout<<"Value of y for 4: "<<endl;
    cout<<(a*pow(50,b))<<endl;

    cout<<"Value of y for 5: "<<endl;
    cout<<(a*pow(70,b))<<endl;

    cout<<"Value of y for 6: "<<endl;
    cout<<(a*pow(100,b))<<endl;

    cout<<"Value of y for 6: "<<endl;
    cout<<(a*pow(120,b))<<endl;


}
int main()
{
    Curve_Fitting_Algorithm();
}
