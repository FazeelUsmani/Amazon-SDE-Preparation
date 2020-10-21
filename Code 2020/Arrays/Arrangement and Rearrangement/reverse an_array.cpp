#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);  
    int l = 0,h = n-1;
    while(l<h){
        swap(a[l],a[h]);
        l++;
        h--;
    }
    for(int i = 0;i<n;i++)
    cout<<a[i]<<",";
}    