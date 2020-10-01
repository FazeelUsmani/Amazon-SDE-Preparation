#include<bits/stdc++.h>
using namespace std;

int fun1(int *a,int l,int h,int k){
    int lt = 0;
    while(l<h){
        if(a[l]>k && a[h]<=k)
        {
            lt++;
            l++;
            h--;
        }
        if(a[l]>k && a[h] >k)
            h--;   
        else
            l++;
    }
    return lt;
}
int fun2(int *a,int l,int h,int k){
    int ht = 0;
    while(l<h){
        if(a[h]>k && a[l]<=k)
        {
            ht++;
            l++;
            h--;
        }
        if(a[l]>k && a[h] >k)
            l++;   
        else
            h--;
    }
    return ht;
}

int main(){
    int a[] = {2, 7, 9, 5, 8, 7, 4}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int l = 0,h = n-1;
    int lt = 0,ht = 0;
    int k;cout<<"Enter the key: ";
    cin>>k;
    int x = fun1(a,l,h,k);int y = fun2(a,l,h,k);
    cout<<min(x,y);
}    