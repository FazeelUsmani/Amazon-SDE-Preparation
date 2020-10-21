#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);
    int h = a[0];
    a[0] = a[0]*a[1];
    for(int i =1;i<n-1;i++){
        int temp = a[i];
        a[i] = h*a[i+1];
        h = temp;
    }
    a[n-1]=  a[n-1]*h;

    for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";
}