#include<bits/stdc++.h>
using namespace std;

bool CheckPal(int A[], int s, int e)
{
	if (s>e)
	{
		return true;
	}
	
	if (A[s]==A[e])
		return CheckPal(A,s+1,e-1);
	else
		return false;
}

int main(){
	
	int A[]={1,2,3,4,5,4,3,8,1};
	
	if (CheckPal(A,0,8))
	{
		cout<<"Palindrome"<<endl;
	}
	else
		cout<<"Not Palindrome"<<endl;
	
	return 0;
}