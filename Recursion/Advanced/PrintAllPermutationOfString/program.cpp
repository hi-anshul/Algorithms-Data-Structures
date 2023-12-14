#include<bits/stdc++.h>
using namespace std;


void PrintPermutation(char str[],int i){
	if (str[i]=='\0')
	{
		cout<<str<<endl;
		return;
	}
	
	for (int j = i; str[j] != '\0'; j++)
	{
		swap(str[i],str[j]);
		PrintPermutation(str,i+1);
		swap(str[i],str[j]);
	}
	
}

int main(){
	
	char str[]="ABC";
	PrintPermutation(str,0);
	
	return 0;
}