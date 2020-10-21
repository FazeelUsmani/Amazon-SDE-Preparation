#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>opr;stack<char>op;
    string s = "*+ab+cd";
    for(int i = 0;i<s.length();i++){
        if(s[i] == '*' || s[i] == '+'){
            op.push(s[i]);
        }
        else{
            opr.push(s[i]);
        }
    }
    stack<char>op1;
    while(!op.empty()){
        op1.push(op.top());
        op.pop();
    }
    while(!opr.empty()){
        if (!op1.empty())
        cout<<opr.top()<<op1.top();
        else
            cout<<opr.top();

        opr.pop();op1.pop();    
    }   
}