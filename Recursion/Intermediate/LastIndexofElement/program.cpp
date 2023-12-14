#include<bits/stdc++.h>
using namespace std;

int LastIndex(int A[], int n, int key)
{
	if (n<0)
	{
		return -1; 
	}
	
	if (A[n]==key)
	{
		return n;
	}
	
	return LastIndex(A,n-1,key);
	
	
}

int LastIndex2(int A[], int n, int key, int i)
{
	if(i==n)
		return -1;
	int validIndex = LastIndex2(A,n,key,i+1);
	if(validIndex == -1)
	{
		if (A[i]==key)
	{
		return i;
	}
	else
		return -1;
	}else{
		return validIndex;
	}
	
	
}

int main(){
	
	int A[]={1,1,4,2,3,5,1,2,7};	
	int LI=LastIndex2(A,9,1,0);
	
	if (LI==-1)
	{
		cout<<"Element not Found"<<endl;
	}
	else
		cout<<LI<<endl;
	
	
	return 0;
}