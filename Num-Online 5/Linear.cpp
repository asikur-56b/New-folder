#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x[10], y[10], sumx=0, sumy=0,sumxy=0, sumx2=0;

    int n;
    cout<<"Enter the Number of data: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        cin>>y[i];

        sumx = sumx + x[i];
        sumy = sumy + y[i];
        sumxy = sumxy + (x[i]*y[i]);
        sumx2 = sumx2 + (x[i]*x[i]);

    }

    double a=0, b=0;

    b = (((n * sumxy) - (sumx * sumy))/((n*sumx2) - (sumx * sumx)));
    a = ((sumy - b*sumx)/n);


    cout<<endl<<a<<"  "<<b<<endl;

    cout<<"Value of y for 4: "<<endl;
    cout<<(a+(b*4))<<endl;

    cout<<"Value of y for 5: "<<endl;
    cout<<(a+(b*5))<<endl;

    cout<<"Value of y for 6: "<<endl;
    cout<<(a+(b*6))<<endl;
}





/*
Enter the Number of data: 9
01 4.999350299
02 10.997478390
03 20.994833060
07 101.018673400
08 131.057112900
12 291.657732000
13 342.011276000
17 585.097753000
18 656.491921400

-102.191  37.8277
Value of y for 4:
49.1198
Value of y for 5:
86.9475
Value of y for 6:
124.775
*/

