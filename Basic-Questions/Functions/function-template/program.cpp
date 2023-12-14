#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>
T maxim(T a, T b){
	
	return a>b?a:b;
	
}

int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(12.6,14.7)<<endl;
	cout<<maxim(12.69991,14.78881)<<endl;
	return 0;

}