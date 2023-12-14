#include<iostream>
using namespace std;

int BinarySearch(int A[], int key)
{
	int s = 0;
	int e = 10-1;
	int mid;
	while(s<=e)
	{
		mid = s + (e-s)/2;

		if (A[mid]==key)
		{
			return mid+1;
		}
		else if (A[mid]>key)
		{
			e=mid-1;
		}
		else s=mid+1;
	}

	return -1;
}

int main()
{
	int A[]= {10,20,30,40,50,60,70,80,90,100};

	int pos = BinarySearch(A,50);

	if (pos==-1)
	{
		cout<<"Key Not Found";
	}
	else
		cout<<"Key found at position: "<<pos<<endl;

return 0;
}