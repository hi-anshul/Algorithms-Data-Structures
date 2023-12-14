#include <iostream>
#include <stack>
using namespace std;

bool validParenthesis(string s)
{
    stack<char> p;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[' )
            p.push(s[i]);
        else{
            if (s.empty()) return false;
            else if(s[i]==')'){
                if (p.top()=='(') p.pop();
                else return false;
            }
            else if(s[i]=='}'){
                if (p.top()=='{') p.pop();
                else return false;
            }
            else if(s[i]==']'){
                if (p.top()=='[') p.pop();
                else return false;
            }
        }
    }
    if (p.empty()) return true;
}

int main() {

    string s ="{}{{})(";
    cout<<validParenthesis(s);

    return 0;
}
