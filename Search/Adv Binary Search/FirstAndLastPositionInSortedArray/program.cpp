#include<bits/stdc++.h>
using namespace std;

int GetFirst(int A[], int key)
{
    int s = 0;
    int e = 10;
    int ans = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(A[mid]==key){
            ans=mid;
            e = mid-1;
            }
        else if(A[mid]<key)
            s=mid+1;
        else if(A[mid]>key)
            e=mid-1;
    }
    return ans;
}

int GetLast(int A[], int key)
{
    int s = 0;
    int e = 10;
    int ans = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(A[mid]==key){
            ans=mid;
            s = mid+1;
            }
        else if(A[mid]<key)
            s=mid+1;
        else if(A[mid]>key)
            e=mid-1;
    }
    return ans;
}

int main(){

    int A[]={1,2,3,4,5,5,5,7,8,9,10};
    int key = 5;

    int first = GetFirst(A,key);
    int last = GetLast(A,key);

    int count = last-first+1;

    cout<<first<<" "<<last<<endl;
    cout<<count;
return 0;
}
