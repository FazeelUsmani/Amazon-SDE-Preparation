#include<bits/stdc++.h>
using namespace std;

void maxheap(int *a,int n,int i){
    int large = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
   if(l< n && a[l] > a[large]){
       large = l;
   }
    if(r<n && a[r] > a[large])
    large = r;

    if(large != i){
        swap(a[i],a[large]);
        maxheap(a,n,large);
    }
}

void heapsort(int *a,int n){
    for(int i =n-1;i>=0;i++){
        swap(a[0],a[i]);
        maxheap(a,i,0);
    }
}

void buildheap(int *a,int n){
    int start = n/2 -1;
    for(int i = start;i>=0;i--)
        maxheap(a,n,i);
}

int main(){
    int a[] = {1,5,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    buildheap(a,n);
    //heapsort(a,n);
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
}