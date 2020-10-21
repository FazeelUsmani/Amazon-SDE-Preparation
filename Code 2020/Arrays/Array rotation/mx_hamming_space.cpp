#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,1,1,1};
    int maxham = 0;
    int n = sizeof(a)/sizeof(a[0]);
    int max = 0;
    for(int i = 0;i<n;i++){
        if(a[i]>max)
            max = a[i];
    }
    int h[max+1] = {0};
    for(int i = 0;i<n;i++){
        h[a[i]] = i;
    }
    int t = a[0];
    for(int i = 1;i<n;i++){
        a[i-1] = a[i];
    }
    a[n-1] = t;
    for(int i = 0;i<n;i++){
       int c = abs(h[a[i]] - i);
       if(c>maxham)
        maxham = c;  
    }
    cout<<maxham + 1;
}