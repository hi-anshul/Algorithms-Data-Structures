#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
	if(n==0) return 0;	//base case (1st Step)
	if(n==1) return 1;	//base case (1st Step)
	
	//recursive case(2nd Step)
	int smallOutput1 = Fibonacci(n-1);
	int smallOutput2 = Fibonacci(n-2);
		
	//Calculation(3rd Step)
	return smallOutput1+smallOutput2;
	
}
int main(){
	
	cout<<Fibonacci(3)<<endl;
	
	
	return 0;
}