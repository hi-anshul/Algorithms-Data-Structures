#include<bits/stdc++.h>
using namespace std;

void PrintNumbers(int n)
{
	//Base Case
	if (n==0) return;
	
	
	//Recursive Case
	PrintNumbers(n-1);
	
	//Final Case
	cout<<n<<endl;
	
}

int main()
{
	PrintNumbers(5);
	
	return 0;
}