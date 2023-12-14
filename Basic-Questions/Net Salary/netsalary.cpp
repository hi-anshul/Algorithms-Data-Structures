#include<iostream>

using namespace std;

int main(){

float basicsal,allowances,deduction,netsal;

    cout<<"Type your basic salary"<<endl;
    cin>>basicsal;   
    cout<<"Type your percentage allowances"<<endl;
    cin>>allowances;
    cout<<"Type your percentage deductions"<<endl;
    cin>>deduction;

netsal= basicsal + ((basicsal*(allowances/100)) - (basicsal*(deduction/100)));

cout<<"Your net salary is: "<<netsal<<endl;

return 0;
}