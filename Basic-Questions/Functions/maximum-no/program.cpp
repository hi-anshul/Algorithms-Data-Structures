#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxim(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>c){
		return b;		
	}
	else
		return c;
	
}

int main()
{
	int a=12,b=4,c=7,z;
	z=maxim(a,b,c);
	cout<<z<<endl;
	return 0;

}