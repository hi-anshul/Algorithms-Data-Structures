#include<iostream>
using namespace std;


int LinearSearch(int A[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i]==key)
		{
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int n, key;
	cout<<"Enter the Size: ";
	cin>>n;

	int A[n];

	cout<<"Enter the Elements into array: ";
	for (int i = 0; i < n; i++)
	{
		cin>>A[i];
		cout<<endl;
	}

	cout<<"Enter the key for search: ";
	cin>>key;
	
	cout<<endl;
	
	int pos = LinearSearch(A,n,key);

	if (pos == -1)
	{
		cout<<"Key not found"<<endl;
	}
	else
		cout<<"Key found at position: "<<pos<<endl;

	return 0;
}
