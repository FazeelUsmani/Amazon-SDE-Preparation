#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {50, 40, 70, 60, 90};
    int index[] = {3,  0,  4,  1,  2};
    int n = sizeof(a)/sizeof(a[0]); 
    int h[n];
    for(int i = 0;i<n;i++){
       h[index[i]] =a[i]; 
    }
    sort(index,index+n);
    for(int i =0;i<n;i++){
        cout<<h[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<index[i]<<" ";
    }
    
}