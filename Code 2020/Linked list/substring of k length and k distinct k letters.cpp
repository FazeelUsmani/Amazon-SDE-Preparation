#include<bits/stdc++.h>
using namespace std;

void solve(string s,int k){
    unordered_map<char,int>m;
    int res = 0;
    for(int i = 0;i<k;i++){
        m[s[i]]++;
    }
    if(m.size() == k)
    res++;

    for(int i = k;i<s.length();i++){
        m[s[i]]++;
        m[s[i - k]]--;
        if(m[s[i-k]]==0)
            m.erase(s[i-k]);

        if(m.size()==k)
            res++;
    }
    cout<<res;
}

int main(){
    string s;int k;
    cin>>s>>k;
    solve(s,k);
}