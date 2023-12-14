#include<iostream>
using namespace std;

int LargestElement(int A[], int n)
{
	int i=0, LargestElement=0;

	LargestElement=A[i];

	for (i = 0; i < n; i++)
	{
		if (A[i]>LargestElement)
		{
			LargestElement=A[i];
		}
	}
	return LargestElement;
}

int main()
{

	int A[]={1,2,3,4,5,6,16,10,12,64};

	cout<<LargestElement(A,10);

	return 0;
}