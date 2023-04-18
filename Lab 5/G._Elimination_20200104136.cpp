#include<bits/stdc++.h>
#include<conio.h>

using namespace std;


int n;
int main()
{

     cout << fixed << setprecision(6);
     cout << "GAUSS Elimination\n";
     cout << "------------\n";
	 double a[10][10], x[10], ratio;



	 cout << "ENTER MATRIX ORDER: ";
	 cin >> n;


     cout << "ENTER COEFFICIENT VALUES:\n";
	 for(int i=1;i<=n;i++)
	 {
		  for(int j=1;j<=n+1;j++)
		  {

            cout << "[" << i << "][" << j << "] = ";
            cin  >> a[i][j];
		  }
	 }



	 for(int i=1;i<=n-1;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
		       cout<<"Error";
			   exit(0);
		  }
		  for(int j=i+1;j<=n;j++)
		  {
			   ratio = a[j][i]/a[i][i];

			   for(int k=1;k<=n+1;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }


	 x[n] = a[n][n+1]/a[n][n];
	 for(int i=n-1;i>=1;i--)
	 {
		  x[i] = a[i][n+1];
		  for(int j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - a[i][j]*x[j];
		  }
		  x[i] = x[i]/a[i][i];
	 }


	 cout << "Answer Will Be\n";


	 for(int i=1;i<=n;i++)
	 {
	  	 cout << "x" << i << "\t" << x[i] << "\n";
	 }
	 getch();

}
