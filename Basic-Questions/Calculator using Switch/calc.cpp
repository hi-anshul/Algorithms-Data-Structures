#include<iostream>

using namespace std;

int main(){
    int a,b,option;
    cout<<"Menu"<<endl;
    cout<<"1. Addition\n"<<"2. Substraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<endl;
    
    cout<<"Select any one Option"<<endl;
    cin>>option;

    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    int c;
    switch (option)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    default:
        cout<<"Invalid Number"<<endl;
        break;
    }  
    cout<<c<<endl;
return 0;
    
}