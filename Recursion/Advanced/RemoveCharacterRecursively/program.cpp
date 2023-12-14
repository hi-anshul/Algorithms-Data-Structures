#include<bits/stdc++.h>
using namespace std;

void RemoveChar(char input[], char remove)
{
	if(input[0]=='\0')
	{
		return;
	}
	
	if(input[0]!=remove)
	{
		RemoveChar(input+1,remove);
	}
	else
	{
		for(int i = 0; input[i]!='\0'; i++)
		{
			input[i]=input[i+1];
		}
		RemoveChar(input,remove);
	}
	
	
}

int main(){
	
	char A[]="abcdabc";
	char rem='a';
	
	cout<<A<<endl;
	RemoveChar(A,rem);
	cout<<A<<endl;
	
	return 0;
}