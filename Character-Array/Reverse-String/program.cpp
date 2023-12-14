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

void Reverse(char A[])
{
	int start =0;
	int end = length(A)- 1;

	while (start<end)
	{
		swap(A[start],A[end]);
		start++;
		end--;
	}
	
}

int main()
{
	char name[100];
	cout<<"Enter the String"<<endl;
	cin.getline(name,100);

	Reverse(name);

	int i = 0;
	while(name[i]!='\0')
	{
		cout<<name[i];
		i++;
	}
	cout<<endl;

	return 0;
}