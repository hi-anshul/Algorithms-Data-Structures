#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=10;
	int *p;			//creating/declaration the pointer
	p=&x;			//intialization of pointer
	
	cout<<x<<endl;	//value of x
	cout<<&x<<endl; //address of x
	cout<<p<<endl;	//address of p
	cout<<&p<<endl;
	cout<<*p<<endl;
	
	return 0;

}