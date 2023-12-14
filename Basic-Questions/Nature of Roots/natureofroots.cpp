#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,d,r1,r2;
    
    cout<<"Enter a,b,c for quadratic equation"<<endl;
    cin>>a>>b>>c;
    
    d=(b*b)-4*a*c;
    
    if (d==0)
    {
        cout<<"Both the roots are real and equal"<<endl;
        cout<<"The root of the equation are "<<-b/2*a;                
    }
    else if(d>0){
        cout<<"Both the roots are real and equal"<<endl;
        cout<<"The root of the equation are "<<-b+sqrt(d)/2*a<<" and "<<-b-sqrt(d)/2*a;
    }
    else{
        cout<<"Roots are imaginary"<<endl;
    }


    return 0;
}