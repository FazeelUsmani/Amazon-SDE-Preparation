#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {2, 3, -4, -1, 6, -9}; 
    int n = sizeof(a)/sizeof(a[0]); 
    sort(a,a+n);
    int l = 1,h;
    for(int i = 0;i<n;i++){
        if(a[i]>0){
            h = i;
            break;
        }
    }
    while(l<h && h<n && a[l]<0){
        swap(a[l],a[h]);
        l = l+2;
        h++;
    }
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
}