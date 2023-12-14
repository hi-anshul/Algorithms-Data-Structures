#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[5]={2,4,6,8,10};
	int *p=A;
	int *q=&A[3];
	int d;
	
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p--;
	cout<<*p<<endl;
	p=p+2;
	cout<<*p<<endl;
	p=p-2;
	cout<<*p<<endl;
	d=q-p;
	cout<<d<<endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout<<*p<<endl;
		p++;
	}

	return 0;

}