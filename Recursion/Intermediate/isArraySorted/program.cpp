#include<bits/stdc++.h>
using namespace std;

bool isSorted(int A[], int n){
	
	//Base Case
	if (n==0 || n==1)
	{
		return true;
	}
	
	if (A[0]>A[1])
	{
		return false;
	}
	
	//recursive case
	
	
	/* if (SmallOutput){
		return true;
	}
	else
		return false;
	*/
	return isSorted(A+1,n-1);;
	
}


bool isSorted2(int A[], int n){
	
	if (n==0 || n==1)
	{
		return true;
	}
	
	bool SmallOutput = isSorted2(A+1,n-1);
	
	if (!SmallOutput)
	{
		return false;
	}
	
	if (A[0]>A[1])
	{
		return false;
	}
	else
		return true;
	
}


bool isSorted3(int A[], int n){
	
	if (n==0 || n==1)
	{
		return true;
	}
	
	if (A[n-2]>A[n-1])
	{
		return false;
	}
	
	return isSorted3(A,n-1);
	
}


int main(){
	
	int A[]= {1,2,7,4,5};
	
	if (isSorted3(A,5))
	{
		cout<<"Sorted";
	}
	else
		cout<<"Not Sorted";
	
	return 0;
}