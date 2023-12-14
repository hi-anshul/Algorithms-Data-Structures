#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	//Base case
	if (n==0)
	{
		return 1;
	}
	int smallanswer = fact(n-1); //assumption (Recursive case)
	int ans = n* smallanswer;	/// 3rd Step (Calculation)
	return ans;
	
}
int main(){
	
	cout<<fact(4)<<endl;
	
	
	return 0;
}