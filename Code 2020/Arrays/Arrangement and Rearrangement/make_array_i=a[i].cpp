#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int n = sizeof(a)/sizeof(a[0]);
    int h[n] = {-1};
    for(int i = 0;i<n;i++){
        if(a[i] > -1)
            h[a[i]] = a[i];    
    }
    for(int i = 0;i<n;i++){
        if(h[i]==0 && i>0)
            h[i] = -1;
        cout<<h[i]<<",";
    }
}