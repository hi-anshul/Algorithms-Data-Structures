#include<iostream>
using namespace std;

void BubbleSort(int A[])
{
	int n = 10;
	int flag = 0;
	for (int count = 0; count <= n-1; count++)
	{
		for (int i = 0; i <= n-2; i++)
		{
			if(A[i]>A[i+1])
			{
				swap(A[i],A[i+1]);
				flag++;
			}

		}

		if(flag==0)		//Optimized Bubble Sort
			break; 
	}
}

int main()
{
	int A[]={10,56,14,66,24,68,15,200,54,64};

	BubbleSort(A);

	for (int i = 0; i < 10; ++i)
	{
		cout<<A[i]<<" ";
	}

	return 0;
}