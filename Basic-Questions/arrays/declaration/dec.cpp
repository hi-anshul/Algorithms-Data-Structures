#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Type 1
	int a[5]={3,4,5,6,10};
	
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<endl;
	}
	
	//Type 2 using for each loop
	int b[]={1,2,3,4,5};
	
	for (int i:b)
	{
		cout<<i<<endl;
	}
	
	//Type 3
	int c[]={1,2,3,4,5,7,6};
	
	for (auto i:c)
	{
		cout<<i<<endl;
	}
	
	return 0;
	

}