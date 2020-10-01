#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string lower = s;string upper = s;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    int l= 0,r = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]!=lower[i])
            l++;
        if(s[i]!=upper[i])
            r++;
     }
     if(l<r)
        cout<<lower;
     else
        cout<<upper;
}