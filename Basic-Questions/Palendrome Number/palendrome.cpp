#include<iostream>

using namespace std;

int main(){
    int i,r,n,p;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    p=n;

    while (n>0)
    {
        r=n%10;
        n=n/10;
        i=i*10+r;
    }
    
    if(p==i){
        cout<<"No is Palendrome"<<endl;
    }
    else
        cout<<"No is not Palendrome"<<endl;
    return 0;
}