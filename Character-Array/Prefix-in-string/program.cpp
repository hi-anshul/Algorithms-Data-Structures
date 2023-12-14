#include<iostream>
#include<cstring>
using namespace std;

void prefix(char name[])
{
	int i,j;

	for (i = 0; name[i]!='\0'; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout<<name[j];
		}
		cout<<endl;
	}
}

int main()
{
	char name[]="abcd";


	prefix(name);

return 0;
}