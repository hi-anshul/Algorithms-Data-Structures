#include<iostream>
using namespace std;

int length(char A[])
{
	int count =0;

	int i =0;

	while (A[i]!='\0')
	{
		count++;
		i++;
	}

	return count;
}

int main()
{
	char name[100];

	cout<<"Enter the String"<<endl;
	cin>>name;
	cout<<length(name);

	return 0;
}