#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {3,2,4};
    int target;cin>>target;
    int n = sizeof(a)/sizeof(a[0]);
    unordered_set<int>s;
    // for(int i = 0;i<n;i++){
    //     m.insert(make_pair(a[i], i));
    // }
    int c,d;int p;
    for(int i = 0;i<n;i++){
        int temp = target-a[i];
        if(s.find(temp) != s.end()){
            p = temp;
            d = i; 
            break;
        }
        else{
            s.insert(a[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(a[i] == p)
        {
            c = i;
            break;
        } 
    }
    cout<<c<<" "<<d;

}