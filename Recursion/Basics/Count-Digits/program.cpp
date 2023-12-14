#include<bits/stdc++.h>
using namespace std;

int Count(int n)
{
	if (n==0)
	{
		return 0;
	}
	
	int smallanswer = Count(n/10);
	
	return smallanswer+1;
	
}
int main(){
	
	cout<<Count(1235)<<endl;
	return 0;
}