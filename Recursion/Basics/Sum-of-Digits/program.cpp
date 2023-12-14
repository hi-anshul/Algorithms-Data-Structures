#include<bits/stdc++.h>
using namespace std;

int Sumofdigits(int n)
{
	//Base Case
	if (n==0)
		{
			return 0;
		}	
		
	//Recursive Case
	int SmallOutput = Sumofdigits(n/10);
	
	//Calculation
	int last_digit=n%10;
	
	return SmallOutput+last_digit;
}

int main(){
	
	cout<<Sumofdigits(15);	
	
	return 0;
}