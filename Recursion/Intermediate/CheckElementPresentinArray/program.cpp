#include<bits/stdc++.h>
using namespace std;

bool isElementPresent(int A[], int n, int key)
{
	if(n==0)
		return false;
	if (A[0]==key)
	{
		return true;
	}
	
	return isElementPresent(A+1,n-1,key);
	
}

bool isElementPresent2(int A[], int n, int key)
{
	if(n==0)
		return false;
		
	bool remArray = isElementPresent2(A+1,n-1,key);
	if (remArray)
	{
		return true;
	}
	if (A[0]==key)
	{
		return true;
	}else
		return false;

}

bool isElementPresent3(int A[], int n, int key)
{
	if(n==0)
		return false;
	if (A[n-1]==key)
	{
		return true;
	}
	
	return isElementPresent3(A,n-1,key);
	
}

bool isElementPresent4(int A[], int n, int key, int index)
{
	if(index==n)
		return false;
		
	if (A[index]==key)
	{
		return true;
	}
	return isElementPresent4(A, n, key, index+1);
	
}


int main(){
	
	int A[]={1,2,3,4,5,6,7,8,9,10};
	int key = 5;
	
	if (isElementPresent4(A,10,key,0)==true)
		cout<<"Present"<<endl;
	else
		cout<<"Not Present"<<endl;
	
	return 0;
}