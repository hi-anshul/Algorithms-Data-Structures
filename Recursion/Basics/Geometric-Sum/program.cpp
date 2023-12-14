#include<bits/stdc++.h>
using namespace std;

double GeometricSum(int k)
{
	//Base Case
	if (k==0)
	{
		return 1;
	}
	//Recursive Case
	double SmallOutput = GeometricSum(k-1);
	
	//calculation
	return SmallOutput + 1.0/pow(2,k); 
	
	
}
int main(){
	
	cout<<GeometricSum(5);
	
	return 0;
}