#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	
	if (n==0) return 1;

	int smallanswer = fact(n-1);
	return n*smallanswer; 
			
}
int main(){
	
	int n;
	cin>>n;
	cout<<endl;
	
	int ans = fact(n);
	cout<<ans<<endl;
	
	return 0;
}