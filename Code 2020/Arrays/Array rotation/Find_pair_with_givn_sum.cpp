#include<bits/stdc++.h>
using namespace std;

bool pair_check(int *a,int sum,int n){
    int l,h;
    for(int i = 0;i<n;i++){
        if(a[i]>a[i+1]){
           l = (i+1)%n;
           h = i;
           break; 
        }   
    }
    while (l != h)
    {
    if(a[l] + a[h] == sum)
        return true;
    if(a[l] + a[h] < sum)
        l =(l+1)%n;    
    if(a[l] + a[h] > sum)
        h = (h-1)%n;
    }
    return false;
}

int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"Enter the sum for pair check \n";
    cin>>sum;
    if(pair_check(a,sum,n))
        cout<<"Pair exists";
    else
        cout<<"No pair exists";
}