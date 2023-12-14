#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[10],n=10, i;
	
	for (i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	
	int ls;
	
	cout<<"Enter Search element"<<endl;
	cin>>ls;
	
	for (i = 0; i < n; i++)
	{
		if (A[i]==ls)
		{
			cout<<"The address of element is: "<<i<<endl;
			break;
					
		}
				
	}
	
	if (A[i]!=ls)
	{
		cout<<"Element not found"<<endl;
		return 0;
	}
	
	
	return 0;

}