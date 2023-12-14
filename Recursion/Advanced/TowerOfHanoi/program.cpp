#include<bits/stdc++.h>
using namespace std;

int toh(int n)
{
	if (n==0)
	{
		return 0;
	}
	
	return toh(n-1)+1+toh(n-1);	
	
}

void PrintSteps(int n, char s, char d, char h)
{
	if (n==0)
	{
		return;
	}
	PrintSteps(n-1,s,h,d);
	cout<<"Moving Disk "<<n<<" from "<<s<<" to "<<d<<endl;	
	PrintSteps(n-1,h,d,s);
	
	
}

int main(){
	
	int n;
	cin>>n;
	
	int output = toh(n);
	cout<<output<<endl;
	
	PrintSteps(n,'A','C','B');
	
	return 0;
}