#include<bits/stdc++.h>
using namespace std;

int n;



int main()
{

    cout << fixed << setprecision(6);
    cout << "GAUSS SEIDAL\n";

    cout << "------------\n";

    cout << "ENTER MATRIX ORDER: ";
    cin>>n;

    double a[20][20],x[n],sum=0,x1=1;


    cout << "ENTER COEFFICIENT VALUES:\n";

      for(int i=0;i<n;i++)
        for(int j=0;j<=n;j++)
        {
            cout << "[" << i+1 << "][" << j+1 << "] = ";
            cin>>a[i][j];
        }

    for(int i=0;i<n;i++)
        x[i]=0;
    while(1)
    {
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                    sum+=a[i][j]*x[j];
            }
            x[i]=(a[i][n]-sum)/a[i][i];
        }
        if(abs(x1-x[0])/x1<0.0001)
        {
            break;
        }
        x1=x[0];
    }
    cout << "Answer Will Be\n";


    for(int i=0;i<n;i++)
        cout<<"x"<<i+1<<"= "<<x[i]<<endl;
    return 0;
}
