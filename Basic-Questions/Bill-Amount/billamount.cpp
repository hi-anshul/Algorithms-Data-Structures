#include<iostream>

using namespace std;

int main(){
    int amt;

    cout<<"Enter the amount"<<endl;
    cin>>amt;

    if(amt<100){
        cout<<"No Discount"<<endl;
    }
    else if(amt>=100 && amt <500){
        
        cout<<"10% Discount"<<endl;
        amt=amt*0.10;
        }
    else if(amt>=500){
        
        cout<<"20% Discount"<<endl;
        amt=amt*0.20;
        } 
    else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<amt<<endl;
    return 0;
}