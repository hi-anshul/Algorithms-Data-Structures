#include<iostream>

using namespace std;

int main(){
    int a;

    cout<<"Enter the number"<<endl;
    cin>>a;

    if(a>0){
        cout<<"Positive Number"<<endl;
    }
    else if(a<0){
        cout<<"Negative Number"<<endl;
    }
    else{
        cout<<"Number is equal to 0"<<endl;
    }

    return 0;
}