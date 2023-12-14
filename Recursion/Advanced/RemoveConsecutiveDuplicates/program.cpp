#include<bits/stdc++.h>
using namespace std;

void RemoveConsecutiveDuplicate(char input[])
{
	if (input[0]=='\0')
	{
		return;
	}
	
	if (input[0]!=input[1])
	{
		RemoveConsecutiveDuplicate(input+1);
	}
	else if ((input[0]==input[1]))
	{
		for (int i = 0; input[i]!='\0'; i++)
		{
			input[i]=input[i+1];
		}		
		RemoveConsecutiveDuplicate(input);		
	}
}

int main(){
	
	char A[]="aaacbasdasdc";
	RemoveConsecutiveDuplicate(A);
	
	cout<<A<<endl;
	
	return 0;
}