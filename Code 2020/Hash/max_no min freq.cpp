#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {2,2,5,50,1};
    int n = sizeof(a)/sizeof(a[0]); 
    int f = 1000;int res = 0;
        int h[101] = {0};
        for(int i = 0;i<n;i++){
            h[a[i]]++;
        }
        for(int i = 0;i<101;i++){
            if(h[i]>0 && h[i]<=f && i >= res){
                f = h[i];
                res = i;
            }
        }
        cout<<res;
}