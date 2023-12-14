#include <iostream>
using namespace std;
const int val_max = 10005, nMax = 10005;
int fr[val_max];
int count;

void frequencyArray(int A[nMax], int n){
    for(int i =0; i<n;i++){
        if(fr[A[i]]==0){
            count++;
        }
        fr[A[i]]++;
    }
}


int main() {
    int A[nMax] = {0,1,9,5,2,1,5,6,3,1,5,1,12,13};
    frequencyArray(A,14);
    cout<<count<<endl;

    //Printing Frequency Array -> It's a type of hashmap
    for(int i = 0; i<14;i++){
        cout<<fr[i]<<" ";
    }
    return 0;
}
