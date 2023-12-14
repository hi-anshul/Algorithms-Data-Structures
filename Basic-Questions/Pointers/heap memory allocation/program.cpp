#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[5]={1,2,3,4,5}; 	//created inside stack
	int *p;					//created inside stack
	
	p=new int[5];			//array created in heap using [new]
	p[0]=1;
	p[1]=15;
	cout<<p[1]<<endl;
	
	delete []p;             // heap memory must be deallocated
	p=nullptr;	
	
	return 0;

}