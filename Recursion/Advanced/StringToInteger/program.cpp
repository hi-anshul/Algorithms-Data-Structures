#include<bits/stdc++.h>
using namespace std;

int length(char input[])
{
	if (input[0]=='\0')
	{
		return 0;
	}
	return 1+length(input+1);
	
}

int ConvertStringToInteger(char str[], int n)
{
	if (n==0)
	{
		return 0;
	}
	int smallAns = ConvertStringToInteger(str,n-1);
	int LastDigit = str[n-1]-'0';
	int ans=smallAns*10+LastDigit;
	return ans;
}

int main(){
	
	char str[]="12345";
	int n = length(str);
	
	int a=ConvertStringToInteger(str,n);
	cout<<a<<endl;
	return 0;
}