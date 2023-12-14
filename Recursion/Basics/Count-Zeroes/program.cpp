#include<bits/stdc++.h>
using namespace std;

int countZeroes(int n){
	
	//Base case
	if (n==0)
	{
		return 0;
	}
	
	//Recursive case
	
	int smallanswer = countZeroes(n/10);
	int last_digit=n%10;
	if (last_digit==0)
	{
		return 1+smallanswer;
	}
	else
		return smallanswer;
}

int main(){
	
	cout<<countZeroes(1051002);
	
	
	return 0;
}