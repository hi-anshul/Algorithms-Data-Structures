#include <bits/stdc++.h>
using namespace std;

int minSteps(int n){
    if(n<=1){
        return 0;
    }
    int y=INT32_MAX;
    int z=INT32_MAX;
    int x = minSteps(n-1);
    if(n%2==0){
        y = minSteps(n/2);
    }
    if(n%3==0){
        z = minSteps(n/3);
    }
    int ans = min(min(y,z),x) + 1;
    return ans;
}

int helper(int n, int *ans){
    if(n<=1){
        return 0;
    }
    /// Check it output already exist
    if(ans[n] != -1){
        return ans[n];
    }

    int y=INT_MAX;
    int z=INT_MAX;
    int x = helper(n-1,ans);
    if(n%2==0){
        y = helper(n/2,ans);
    }
    if(n%3==0){
        z = helper(n/3,ans);
    }
    int output = min(min(y,z),x) + 1;
    ans[n]=output;
    return output;
}

int minSteps2(int n){
    int *ans = new int(n+1);
    for (int i = 0; i <= n; i++) {
        ans[i]=-1;
    }
    return helper(n,ans);

}

int minSteps3(int n){
    if(n<=1){
        return 0;
    }
    int *dp = new int(n+1);
    dp[0]=0;
    dp[1]=0;

    ///dp[i] = min steps needed to move from i to 1, ans = dp[n]
    for (int i = 2; i <=n ; i++) {
        int y=INT32_MAX;
        int z=INT32_MAX;
        int x = dp[i-1];
        if(i%2==0){
            y = dp[i/2];
        }
        if(n%3==0){
            z = dp[i/3];
        }
        dp[i]=min(x,min(y,z))+1;
    }
    return dp[n];
}
int main() {
    cout<<minSteps(11)<<endl;
    cout<<minSteps2(10)<<endl;
    cout<<minSteps3(10)<<endl;
    return 0;
}
