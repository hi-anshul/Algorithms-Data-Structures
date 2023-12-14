#include<bits/stdc++.h>
using namespace std;

void ReplaceChar(char input[], char inp, char out)
{
	if (input[0]=='\0')
	{
		return;
	}

	if (input[0]==inp)
	{
		input[0]=out;
	}

	ReplaceChar(input+1, inp, out);
}

int main(){

	cout<<"Enter the string"<<endl;
	char A[100];
	cin>>A;

	cout<<"Enter the character to replace"<<endl;
	char input;
	cin>>input;

	cout<<"Enter the character to replace with"<<endl;
	char output;
	cin>>output;

	cout<<A<<endl;
	ReplaceChar(A,input,output);
	cout<<A<<endl;

	return 0;
}
