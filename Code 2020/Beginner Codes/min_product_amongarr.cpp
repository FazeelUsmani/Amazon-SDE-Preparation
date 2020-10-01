#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"The minimum product of triplet in an array is : "<<min(a[0]*a[n-2]*a[n-1],a[0]*a[1]*a[2]);
    return 0;
}