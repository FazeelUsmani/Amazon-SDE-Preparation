#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to find the K'th largest element in the
// array using min-heap
int FindKthLargest(vector<int> const &A, int k)
{
	// create a min-heap using std::priority_queue and insert
	// first k elements of the array into the heap
	// std::greater is used as the comparison function for min-heap
	priority_queue<int, vector<int>, greater<>> pq(A.begin(), A.begin() + k);

	// do for remaining array elements
	for (int i = k; i < A.size(); i++)
	{
		// if current element is more than the root of the heap
		if (A[i] > pq.top())
		{
			// replace root with the current element
			pq.pop();
			pq.push(A[i]);
		}
	}

	// return the root of min-heap
	return pq.top();
}

// Find K'th largest element in an array
int main()
{
	vector<int> A  = { 7, 4, 6, 3, 9, 1 };
	int k = 2;

	cout << "K'th largest element in the array is " <<
			FindKthLargest(A, k);

	return 0;
}