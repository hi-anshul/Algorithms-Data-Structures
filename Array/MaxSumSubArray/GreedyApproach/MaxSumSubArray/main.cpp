#include <iostream>

using namespace std;

int maxSumSubarray(int a[], int n){

    int ans= a[0]; int sum=0;

    for(int i=1; i<n;i++){
        sum+=a[i];
        ans = max(ans,sum);
        if(sum<0)
            sum=0;
    }

return ans;
}

int main()
{
    int a[]={1,2,5,-1,2,-6,-7,10,11};
    cout<<maxSumSubarray(a,9);
    return 0;
}
