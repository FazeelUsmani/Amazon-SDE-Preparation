#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4}; 
    int n = sizeof(a)/sizeof(a[0]); 
    sort(a,a+n);
    int h[n];
    int l = 0;int r =n-1;
    for(int i = 0;i<n;i++){
        if(l <= r){
        if(i%2 == 0){
            h[i] = a[l];
            l++;
        }
        else
        {
            h[i] = a[r];
            r--;
        }
        }
    }
    for(int i =0;i<n;i++)
        cout<<h[i]<<" ";
}