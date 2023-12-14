#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
	if(a<b)
		return a;
	else if(b<a)
		return b;
}
int min(int a,int b, int c){
	if(a<b && a<c)
		return a;
	else if(b<c && b<a)
		return b;
	else if(c<b && c<a)
		return c;
}

int main()
{
	int a=5,b=5,c=4,d,e;
	d=min(a,b);
	e=min(a,b,c);
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;

}