#include<bits/stdc++.h>
using namespace std;

int Length(char input[])
{
	if (input[0]=='\0')
		return 0;
	else
		return 1+Length(input+1);
	
}

int main(){
	
	char A[]="abcd";
	
	int Len = Length(A);
	
	cout<<Len<<endl;
	
	return 0;
}