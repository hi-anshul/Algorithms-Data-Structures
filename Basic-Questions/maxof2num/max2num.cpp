#include<iostream>

using namespace std;

int main(){
    int a,b;

    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;

    if(a>b){
        cout<<"First Number is greater than second number"<<endl;
    }
    else if(b>a){
        cout<<"Second Number is greater than first number"<<endl;
    }
    else{
        cout<<"First number is equal to the second number"<<endl;
    }

    return 0;
}