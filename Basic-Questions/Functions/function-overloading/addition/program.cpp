#include<iostream>
#include<bits/stdc++.h>
using namespace std;


float add(float x, float y)
{
	
	return x+y;
}
float add(float x, float y, float z)
{
	
	return x+y+z;
}

int main()
{
	float x=15,y=17.6,z=15.2,a,b;
	a=add(x,y);
	b=add(x,y,z);
	cout<<a<<endl;
	cout<<b<<endl;		
	return 0;

}