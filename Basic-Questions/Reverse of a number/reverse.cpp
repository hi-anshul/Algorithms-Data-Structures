#include<iostream>

using namespace std;

int main(){
    int r,n=342,i;

while (n>0)
{
    r=n%10;
    n=n/10;
    i=i*10+r;
}

cout<<i<<endl;

    return 0;
}