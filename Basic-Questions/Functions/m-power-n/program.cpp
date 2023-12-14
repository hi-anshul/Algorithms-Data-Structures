#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

float power(float x,float y){
	
	float z;
	z=pow(x,y);
	return z;
	
}
int main()
{
	float x= 2,y=5,z;
	z=power(x,y);
	
	cout<<z<<endl;
	
	return 0;

}