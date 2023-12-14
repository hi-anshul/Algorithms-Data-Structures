#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> removeDuplicates(int *arr, int n){
    vector<int> output;
    unordered_map<int,bool> mymap;

    for (int i = 0; i < n; i++) {
        if(mymap.count(arr[i])==0){
            output.push_back(arr[i]);
            mymap[arr[i]]=true;
        }
    }
    return output;
}

int main() {

    int arr[]={1,4,5,6,2,5,15,2,1,5,1,2,5,6,10};
    vector<int> output = removeDuplicates(arr,15);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }

    return 0;
}
