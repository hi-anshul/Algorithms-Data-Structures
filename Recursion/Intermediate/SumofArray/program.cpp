#include<bits/stdc++.h>
using namespace std;

int SumofArray(int A[], int n){
	
	//Base case
	if (n==0)return 0;
	
	//Recursive case
	
	return A[0]+SumofArray(A+1,n-1);
	
}

int SumofArray2(int A[], int n){
	
	//Base case
	if (n==0)return 0;
	
	//Recursive case
	
	return A[n-1]+SumofArray2(A,n-1);
	
}

int SumofArray3(int A[], int n, int i){
	
	//Base case
	if (i==n)return 0;
	
	//Recursive case
	
	return A[i]+SumofArray3(A,n,i+1);
	
}

int main(){
	
	int A[]={1,2,3,4,5};
	
	cout<<SumofArray3(A,5,0);
	
	return 0;
}