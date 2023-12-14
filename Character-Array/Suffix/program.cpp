#include<iostream>
#include<cstring>
using namespace std;


void suffix(char str[])
{
	int e,s;
	
	for (int e = strlen(str)-1; e>=0 ; e--)
	{
		for (s = strlen(str)-1; s>=e ;s--)
		{
			cout<<str[s];
		}
		cout<<endl;
	}

}

int main()
{
	char name[]="abcd";
	suffix(name);
		
	return 0;
}