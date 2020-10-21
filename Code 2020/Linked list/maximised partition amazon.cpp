#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int n = s.length();
    if(n==0)
    return;

    vector<int>v(26,-1);
    for(int i = 0;i<n;i++){
        v[s[i] - 'a'] = i;
    }
    string ans = "";
    int minp = -1;
    for(int i = 0;i<n;i++){
        int lp = v[s[i] - 'a'];
        minp = max(minp, lp); 
       if(minp == i){
           cout<<ans<<" ";
           ans = "";
           minp = -1;
       }
       else{
           ans += s[i];
       }
    }
}

int main(){
    string s;
    cin>>s;
    solve(s);
}