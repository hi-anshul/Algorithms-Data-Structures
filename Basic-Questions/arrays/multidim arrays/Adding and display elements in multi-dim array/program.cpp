#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

int r,c;
cout<<"Please enter rows and columns"<<endl;
cin>>r;
cin>>c;

int A[r][c];

for (int rows = 0; rows < r; rows++)
{
	for (int columns = 0; columns < c; columns++)
	{
		cin>>A[rows][columns];
	}
}

for (int rows = 0; rows < r; rows++)
{
	for (int columns = 0; columns < c; columns++)
	{
		cout<<A[rows][columns];
		cout<<" ";
	}
	cout<<endl;
}



return 0;
}
