#include <iostream>

using namespace std;

const int nMax = 10000;

long long maxSumSubArray(int a[], int n){
    if(n==0)
        return 0;
    long long s[nMax], ans = a[1], minS=0;
    s[1]=a[1];

    for(int i =2; i<=n; i++){
        s[i]=s[i-1]+a[i];
    }

    for(int i=1; i<=n; i++){
        ans = max(s[i] - minS,ans);
        if(s[i]<minS)
            minS=s[i];
    }

    return ans;
}

int main()
{
    int a[]={1,2,3,-1,2,-5,-6,10,11,12};
    cout<<maxSumSubArray(a,9);

    return 0;
}
