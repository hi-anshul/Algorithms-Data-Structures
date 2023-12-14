#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
//A[rows][columns]={{1,2,3},{4,5,6},{7,8,9}}
int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int C[3][3];

for (int rows = 0; rows < 3; rows++)
{
	for (int columns = 0; columns < 3; columns++)
	{
		C[rows][columns]=A[rows][columns]+B[rows][columns];
	}
	
}

for (int rows = 0; rows < 3; rows++)
{
	for (int columns = 0; columns < 3; columns++)
	{
		cout<<C[rows][columns];
		cout<<" ";
	}
	cout<<endl;
	
}
	
	
	return 0;

}