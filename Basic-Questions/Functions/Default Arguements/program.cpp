#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int add(int x,int y, int z=0){
	
	return x+y+z;
}
int main()
{
	int a=5,b=2,c=15;
	
	cout<<add(a,b)<<endl;
	cout<<add(a,b,c)<<endl;
	return 0;

}