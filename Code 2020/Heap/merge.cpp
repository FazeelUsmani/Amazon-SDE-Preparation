#include<bits/stdc++.h>
using namespace std;

int merge(int *a,int l,int m,int h){
    int ncount = 0;
    int n1 = m-l + 1;
    int n2 = h-m;
    int *lh = new int[n1], *rh = new int[n2];
    for(int i =0;i<n1;i++)
        lh[i] = a[l+i];
    for(int j =0;j<n2;j++)
        rh[j] = a[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2 && k<n1+n2){
        if(lh[i]<=rh[j]){
            a[k] = lh[i];
            i++;
        }
        else{
            a[k] = rh[j];
            cout<<"("<<lh[i]<<","<<rh[j]<<")"<<" ";
            j++; ncount ++;
        }
        k++;
    }
    while(i<n1){
        a[k] = lh[i];
        k++;i++;
    }
    while(j<n2){
        a[k] = rh[j];
        k++;j++;
       
    }
    delete[] lh;
    delete[] rh;
    return ncount;
}

int mergesort(int *a,int l,int h){
    int count =0;
    if(l<h){
        int mid = l + (h-l)/2;
         count += mergesort(a,l,mid);
         count +=mergesort(a,mid+1,h);
         count +=merge(a,l,mid,h);
    }
    return count;
}



int main(){
    int a[] = {5,4,3};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<mergesort(a,0,n-1);
}