#include<iostream>

using namespace std;

int main(){
    int n=153,r,c=0,a;
    a=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        c=c+r*r*r;
    }
    cout<<c<<endl;

    if(c==a){
        cout<<"Armstrong Number"<<endl;
    }
    else
        cout<<"not an armstrong number"<<endl;
    
return 0;
} 