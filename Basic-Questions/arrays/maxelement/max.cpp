#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5]={-1,-4,2,-10,-5},max;
	max=a[0];
	for (int i = 0; i < 5; i++)
		{
			if (max<a[i])
			{
				max=a[i];
			}
		}	
		
		cout<<max;
	return 0;

}