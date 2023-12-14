#include <bits/stdc++.h>
using namespace std;

string RemoveDuplicates(string s){
    stack<char> st;
    string ans="";
    for (int i = 0; i < s.length(); i++) {
        if (st.empty() || s[i] != st.top()){
            st.push(s[i]);
        }else{
            st.pop();
        }
    }
    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main() {
    string A = "Missippi";
    cout<<RemoveDuplicates(A)<<endl;
    return 0;
}
