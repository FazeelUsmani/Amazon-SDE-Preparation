#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n){
    int sum;
    if(n==0)
        return 0;
    if(n==1)
        return a[0];
    else{
        return max(a[n-1]+ maxsum(a,n-1),maxsum(a,n-1));
    }        
}

int main(){
    int a[] = {-1,2,-3,4,5};
    int n = sizeof(a)/sizeof(a[0]); 
    cout<<maxsum(a,n);
}