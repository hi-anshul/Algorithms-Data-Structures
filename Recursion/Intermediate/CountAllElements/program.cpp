#include<bits/stdc++.h>
using namespace std;

void count(int A[], int n, int key,int i,int &ans)
{
	if(i==n)
		return;
	if (A[i]==key)
		ans++;
	
	count(A,n,key,i+1,ans);
		
}

int count2(int A[],int n,int key, int i)
{
	if (i==n)
		return 0;
	
	if (A[i]==key)
		return 1+ count2(A,n,key,i+1);
	else 
		return 0+ count2(A,n,key,i+1);			
}

int main(){
	
	int ans = 0;
	int A[]={1,1,4,2,3,5,1,2,7};
	
	cout<<count2(A,9,2,0);

	return 0;
}