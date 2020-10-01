#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {2, 2, 0, 4, 0, 8}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int i = 0;
    while(i<n){
        if(a[i] == a[i+1] && a[i]!=0){
            a[i] *=2;
            a[i+1] = 0;
            i++; 
        }
        i++;
    }
    int count =0;
    for(int j = 0;j<n;j++){
        if(a[j] != 0){
            count++;
            cout<<a[j]<<" ";
        }
    }
    for(int j = count;j<n;j++)
    cout<<"0"<<" ";
}    