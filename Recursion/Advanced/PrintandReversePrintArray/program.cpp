#include<bits/stdc++.h>
using namespace std;

void print(char input[])
{
	if (input[0]=='\0')
		return;
	
	cout<<input[0];
	print(input+1);
	
}

void ReversePrint(char input[])
{
	if (input[0]=='\0')
		return;
	
	ReversePrint(input+1);
	cout<<input[0];
}

void print2(char input[],int i)
{
	if (input[i]=='\0')
		return;
	
	cout<<input[i];
	print2(input,i+1);
	
}

int main(){
	
	char A[] = "abc";
	
	print2(A,0);	
	
	return 0;
}