#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int c,average;
for (int rows = 0; rows < 3; rows++)
{
	for (int columns = 0; columns < 3; columns++)
	{
		c = c+A[rows][columns];
		
	}
}
	average = c/9;
	
	cout<<"Average of all elements of array is: "<<average<<endl;
	return 0;

}