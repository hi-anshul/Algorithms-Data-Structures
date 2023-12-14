#include<iostream>
using namespace std;

void SelectionSort(int A[])
{
	int n = 10;
	int smallest;
	for (int i = 0; i <= n-2; i++)
	{
		smallest= i;
		for (int j = i+1; j <= n-1; j++)
		{

			if (A[j]<A[smallest])
			{
				smallest=j;
			}
		}
		if(A[smallest]<A[i])
			swap(A[i],A[smallest]);

	}

}

int main()
{
	int A[]={60,20,67,24,16,67,70,104,97,84};
	
	SelectionSort(A);
	for (int i = 0; i < 10; i++)
	{
		cout<<A[i]<<" ";
	}

	return 0;
}