#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>freq;
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss>>word){
        freq[word]++;
    }
    for(auto it = freq.begin();it!=freq.end();it++)
        cout<<it->first<<"->"<<it->second<<endl;
}