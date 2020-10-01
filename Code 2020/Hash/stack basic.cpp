#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>res;stack<char>op;
    string s = "a*b+c";
    for(int i = 0;i<s.length();i++){
        if(s[i] == '*' || s[i] == '+'){
            op.push(s[i]);
        }
        else{
            res.push(s[i]);
            if(!op.empty()){
                res.push(op.top());
            }
        }
    }
    while(!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }
}