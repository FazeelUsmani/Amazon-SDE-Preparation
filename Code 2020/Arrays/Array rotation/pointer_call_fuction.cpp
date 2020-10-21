#include <iostream> 
using namespace std;
int fun(int *ptr) 
{ 
int x = 10; 

// size of a pointer is printed 
cout<<"sizeof(ptr) :"<<sizeof(ptr)<<endl; 

// This allowed because ptr is a pointer, not array 
ptr = &x; 

cout<<"*ptr : "<<*ptr; 
return 0;
} 

int main() 
{ 
int arr[] = {10, 20, 30, 40, 50, 60}; 
fun(arr); 
cout<<endl;
cout<<sizeof(arr);
return 0; 
} 
