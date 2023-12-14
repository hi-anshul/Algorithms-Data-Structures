#include<iostream>

using namespace std;

int main(){
    int r,s,m=1,n=7;
    while(m!=n){
        if (m>n)
        {
            r=m-n;
            m=r;
        }
        if(n>m){
            s=n-m;
            n=s;
        }

    }
    cout<<"GCD of two no: "<<m<<endl;

    return 0;
}