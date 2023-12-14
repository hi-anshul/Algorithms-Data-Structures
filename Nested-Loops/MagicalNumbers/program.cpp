#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while(n>0){
        sum = sum+ n%10;
        n = n/10;
    }
return sum;
}

int magicNumber(int n){
    while(n>9){
        n = sumOfDigits(n);
    }
    return n;

}

int main(){
    cout<<magicNumber(19234);

return 0;
}
