#include<iostream>
using namespace std;

int sum(int A[],int n)
{
	int i,sum=0;

	for (i = 0; i < n; i++)
	{
		sum=A[i]+sum;
	}

	return sum;
}

int main()
{
	int A[]={1,2,3,4,5,6,7};

	cout<<sum(A,7);

	return 0;
}