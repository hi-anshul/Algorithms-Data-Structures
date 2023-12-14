#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int A[10]={1,2,3,4,5,0,-2,-3,-4,0};
int ncount=0,pcount=0,zcount=0;

for (int i = 0; i < 10; i++)
{
	if (A[i]>0)
	{
		pcount++;
	}
	else if (A[i]<0)
	{
		ncount++;
	}
	else
		zcount++;

}
cout<<"No of positive Elements "<<pcount<<endl;
cout<<"No of negative Elements "<<ncount<<endl;
cout<<"No of neutral Elements "<<zcount<<endl;
	
	return 0;

}