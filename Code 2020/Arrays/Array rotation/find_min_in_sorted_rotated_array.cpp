#include<bits/stdc++.h>
using namespace std;

int search(int *a,int l,int h){
    while(l<h){
        int mid = l + (h-l)/2;
        if(a[l]>a[mid])
            l = mid;
        if(a[l] == a[mid])
        {
           l++;
        }
        else
            h = mid - 1;
            
    }
    return a[l];
}

int main(){
    int a[] = {1,1,1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<search(a,0,n-1);
}