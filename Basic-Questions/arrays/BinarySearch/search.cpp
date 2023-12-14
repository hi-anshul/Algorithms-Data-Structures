#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int A[10]={1,2,3,4,5,6,7,8,9,10};
int l=0,h=9,key,mid;
	
cout<<"Enter the key"<<endl;
cin>>key;

	while(l<=h){
	mid=(l+h)/2;
	if(key==A[mid]){
		cout<<mid<<endl;
		return 0;
	}
	else if (key>A[mid])
	{
		l=mid+1;
	}
	else if (key<A[mid])
	{
		h=mid-1;
	}
	}
	cout<<"not Found"<<endl;
	return 0;

}