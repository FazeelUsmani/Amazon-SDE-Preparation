#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// Method to add element to stack
void push(vector<int> &vec, int element){
	vec.push_back(element);
}

// Method to delete the element from Stack 
int pop(vector<int> &vec){
	  vector<int>::iterator it;
	  int last_element=vec.size()-1;
	  int element=vec[last_element];
	  it = std::find (vec.begin(), vec.end(), element);
    if (it != vec.end())
    {
    	vec.pop_back();
    	return element;
    	
    }
    else{
        // either vector  is empty or element not found
    	return -1;
    }

}

int main() {

	vector <int> vec;
    // Add element to vector array
	push(vec,2);
	push(vec,3);
    // Delete element from vector 
	int x= pop(vec);
	push(vec,3);
	cout<<x;
	int y= vec.size;
	cout<<y;
		return 0;
}