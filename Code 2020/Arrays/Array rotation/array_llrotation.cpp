#include<bits/stdc++.h>
using namespace std;

void leftrotate(int *arr,int n){
    int t = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = t;
}

int main(){
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cout<<"Enter the no of rotations of the array :"<<endl;
    cin>>d;
    for(int i = 0;i<d;i++){
        leftrotate(a,n);
    }
    cout<<"The final array :"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}