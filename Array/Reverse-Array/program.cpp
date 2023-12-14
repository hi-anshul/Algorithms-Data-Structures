#include<iostream>
using namespace std;

int main()
{

	int A[]={1,2,3,4,5,6,16,10,12,64};

	int start = 0;
	int end = 9;

	while(start<=end)
	{
		swap(A[start],A[end]);
		start++;
		end--;
	}

	for (int i = 0; i < 10; i++)
	{
		cout<<A[i]<<" ";
	}

	return 0;
}