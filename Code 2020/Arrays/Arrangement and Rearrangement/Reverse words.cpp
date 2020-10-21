#include<bits/stdc++.h>
using namespace std;

void rev(string &s){
    int start = 0;
    for(int end = 0;end<s.length();end++){
        if(s[end] == ' '){
            reverse(s.begin() + start, s.begin() + end);
            start  = end+1;
        }
    }
    reverse(s.begin()+start,s.end());
    reverse(s.begin(),s.end());

}

int main(){
    string s  = "how are you";
    rev(s);
    cout<<s;
}

