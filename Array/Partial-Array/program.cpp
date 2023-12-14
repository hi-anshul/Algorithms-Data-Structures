#include<iostream>
using namespace std;

const int nMax=10005;
long long sum[nMax];

void partialArray(int arr[],int n){

    sum[0]=arr[0];
    for(int i =1; i<n; i++){
        sum[i]=sum[i-1]+arr[i];
    }
}

long long sumofSubsequence(int x, int y){
    return sum[y]-sum[x-1];
}



int main(){
    int a[]={1,2,3,4,5,6,7,-1,10};
    partialArray(a,8);
    cout<<sumofSubsequence(2,5);


return 0;
}
