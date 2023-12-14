#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int B[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int sum[3][3];

for (int i = 0; i < 3; i++) //iteration of rows of matrix A
{
	for (int j = 0; j < 3; j++) //iteration of rows of matrix B 
	{
		
		for (int k = 0; k < 3; k++) // //iteration of column of matrix A
		{
			sum[i][j]= sum[i][j] + A[i][k]*B[k][j];
		}
	}
}

for (int i = 0; i < 3; ++i)
{
	for (int j = 0; j < 3; ++j)
	{
		cout<<sum[i][j]<<" ";
	}
	cout<<endl;
}
	
	return 0;

}