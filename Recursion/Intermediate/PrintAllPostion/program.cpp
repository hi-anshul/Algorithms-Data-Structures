#include<bits/stdc++.h>
using namespace std;

void PrintAllPostion(int A[], int n, int key,int i)
{
	if(i==n)
		return;
	if (A[i]==key)
		cout<<i<<" ";
	
	PrintAllPostion(A,n,key,i+1);
		
}
int main(){
	
	int A[]={1,1,4,2,3,5,1,2,7};
	PrintAllPostion(A,9,2,0);
	

	return 0;
}