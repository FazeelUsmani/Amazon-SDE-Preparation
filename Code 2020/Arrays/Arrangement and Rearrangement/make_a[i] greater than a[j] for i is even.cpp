#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,1,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int mid = (n-1)/2;
    vector<int>v;
    sort(a,a+n);
    for(int i = 0;i<=mid;i++){
        v.push_back(a[i]);
        // cout<<v[i]<<endl;
    }
    reverse(v.begin(),v.end());
    int h[n];
    int j =0;
    for(int i = 0;i<n;i=i+2){
        h[i] = v[j];
        j++;
    }
    int k = 1;
    for(int i = 1;i<n;i= i+2){
        h[i] = a[mid + k];
        k++;
    }
    for(int i = 0;i<n;i++)
        cout<<h[i]<<" ";    
}