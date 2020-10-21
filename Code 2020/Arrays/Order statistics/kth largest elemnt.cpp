// #include<bits/stdc++.h>
// using namespace std;

// void maxheapify(int a[],int n,int i){
//     int largest = i;
//     int l = 2*i + 1;
//     int r = 2*i + 2;
//     if(l<n && a[l]>a[largest])
//         largest = l;
//     if(r<n && a[r] > a[largest])
//         largest = r;

//     if(largest != i){
//         swap(a[i],a[largest]);
//         maxheapify(a,n,largest); 
//     }  
// }
// void buildheap(int a[],int n){
//     int start = n/2 -1;
//     for(int i = start;i>=0;i--)
//         maxheapify(a,n,i);
// }

// int main(){
//     int a[] = {7, 10, 4, 3, 20, 15};
//     int n = sizeof(a)/sizeof(a[0]);
//     buildheap(a,n);
//     for(int i = 0;i<n;i++)
//         cout<<a[i]<<" ";
// }
// C++ code to demonstrate the working of 
// sort_heap() 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	// Initializing a vector 
	vector<int> v1 = {20, 30, 40, 25, 15}; 
	
	// Converting vector into a heap 
	// using make_heap() 
	make_heap(v1.begin(), v1.end()); 
	
	// Displaying heap elements 
	cout << "The heap elements are : "; 
	for (int x = 0;x<v1.size();x++) 
	cout << v1[x] << " "; 
	cout << endl; 
	
	// sorting heap using sort_heap() 
	sort_heap(v1.begin(), v1.end()); 
	
	// Displaying heap elements 
	cout << "The heap elements after sorting are : "; 
	for (int x = 0;x<v1.size();x++) 
	cout << v1[x] << " "; 
    cout<<endl;
    int k;cin>>k;
    cout<<v1[k-1];
	
	return 0; 
} 
