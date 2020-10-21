#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int count = 0;
    for(int i = 0;i<n;i++){
        if(a[i] !=0){
            count++;
            cout<<a[i]<<" ";
        }
    }
    for(int i = count;i<n;i++)
        cout<<"0"<<" ";
}