#include<bits/stdc++.h>
using namespace std;


int FirstIndexofElement(int A[], int n, int key, int i){
	
	if (i==n)
		return -1;
	
	if (A[i]==key)
	{
		return i;
	}
	return FirstIndexofElement(A,n,key,i+1);
	
}


int main(){
	
	int A[]={1,1,4,2,3,5,1,2,7};
	
	int FirstIndex = FirstIndexofElement(A,9,10,0);
	
	if (FirstIndex == -1)
	{
		cout<<"Element not Present"<<endl;
	}
	else
		cout<<FirstIndex<<endl;
	
	return 0;
}