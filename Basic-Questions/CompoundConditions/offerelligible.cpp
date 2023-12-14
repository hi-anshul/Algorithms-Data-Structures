#include<iostream>

using namespace std;

int main(){
    int age;

    cout<<"Enter the age of the person"<<endl;
    cin>>age;

    if(age>12 && age<50){
        cout<<"eligible for the offer"<<endl;
    }
    else{
        cout<<"Not eligible"<<endl;        
    }
    return 0;
}