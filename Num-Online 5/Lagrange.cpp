#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main()
{
    float x[100],y[100],xp,yp,p;
    int n,D=1;

    cout << " Enter The Number Of Interval :";
    cin >> n;


    cout << endl<<endl <<"Enter X & Y :"<<endl;


    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }


    while(D==1)
    {
     cout<<"Enter interpolation point: ";
	 cin>>xp;



	 for(int i=0;i<n;i++)
	 {
		  p=1;
		  for(int j=0;j<n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	    cout<< endl<<"Interpolated value at "<< xp<< " is "<< yp;


        cout <<endl<<endl<<"Continue Or Exit ?If Continue Press 1. or Exit Press Any .";
        cin >> D;

    }

    getch();
}










/*

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
Enter interpolation point: 9

Interpolated value at 9 is 810










*/
