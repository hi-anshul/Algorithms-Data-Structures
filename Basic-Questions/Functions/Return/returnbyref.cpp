#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int & fun(int &x)
{
	return x;
}
int main()
{
	int a=10;
	fun(a)=25;
	cout<<a<<endl;
	return 0;

}