#include<bits/stdc++.h>
using namespace std;

int Multiply(int m,int n)
{
	//Base case
	if(n==0) return 0;
	
	///Recursion
	int smallanswer = Multiply(m,n-1);
	
	//Calculation
	return smallanswer+m;
	
}
int main(){
	
	cout<<Multiply(3,5);
	
	
	return 0;
}