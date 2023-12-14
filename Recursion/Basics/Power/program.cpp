#include<bits/stdc++.h>
using namespace std;

int Pow(int x,int n)
{
	//Base Case
	if (n==0)
	{
		return 1;
	}
	
	//Recursive case
	int smallOutput = Pow(x, n-1);
	
	//Calculation
	return x*smallOutput;
	
}
int main(){
	
	cout<<Pow(5,3)<<endl;
	
	
	return 0;
}