#include<bits/stdc++.h>

using namespace std;

int RPN(vector<string>& tokens){
    stack<int> st;

    for(int i=0;i<tokens.size();i++)
    {
        if(tokens[i]=="+" || tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
            //2 elements
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();

            if(tokens[i]=="+"){
                st.push(v1+v2);
            }
            else if(tokens[i]=="-"){
                st.push(v2-v1);
            }
            else if(tokens[i]=="*"){
                st.push(v1*v2);
            }
            else if(tokens[i]=="/"){
                st.push(v2/v1);
            }
        }
        else {
            st.push(atoi(tokens[i].c_str()));
        }
    }

    return st.top();
}


int main(){

    vector<string> s1={"14","12","*"};
    cout<<RPN(s1)<<endl;

return 0;
}
