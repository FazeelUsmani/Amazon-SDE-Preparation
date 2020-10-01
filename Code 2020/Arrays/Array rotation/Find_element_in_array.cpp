#include<bits/stdc++.h>
using namespace std;

int search(int a[],int l,int h,int k){
    if(l>h)
        return -1;
    int mid = (l+h)/2;
    if(a[mid] == k)
        return mid;    

    if(a[l] <= a[mid]){
        if(a[l]<= k && k <= a[mid])
            return search(a,l,mid-1,k);
        return search(a,mid+1,h,k);    
    }
    if(k >= a[mid] && k <=a[h])
        return search(a,mid+1,h,k);

    return search(a,l,mid-1,k);    
}
int main(){
    int n;cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the state of elements after rotation"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the elemnt to be searched"<<endl;
    cin>>k;
    cout<<"Index positon is :"<<search(a,0,n-1,k);
}