#!/usr/bin/env python3

"""
Given a singly linked list of size N. The task is to rotate the linked list
counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to
length of the linked list.

Example 1:

Input:
    N = 5
    value[] = {2, 4, 7, 8, 9}
    k = 3

Output: 8 9 2 4 7

Explanation:
    Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
    Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
    Rotate 3: 8 -> 9 -> 2 -> 4 -> 7

Example 2:

Input:
    N = 8
    value[] = {1, 2, 3, 4, 5, 6, 7, 8}
    k = 4

Output: 5 6 7 8 1 2 3 4

Your Task:

You don't need to read input or print anything. Your task is to complete the function
rotate() which takes a head reference as the first argument and k as the second argument,
and returns the head of the rotated linked list.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 103
1 <= k <= N
"""

class LinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

    def __repr__(self):
        return str(self.data)

class LinkedList:
    def __init__(self, data_arr=None, head=None):
        self.head = head
        if data_arr != None:
            node = LinkedListNode(data=data_arr.pop(0))
            self.head = node
            for data in data_arr:
                node.next = LinkedListNode(data=data)
                node = node.next

    def __repr__(self):
        node = self.head
        node_str_arr = []
        while node is not None:
            node_str_arr.append(str(node.data))
            node = node.next
        node_str_arr.append("None")
        return " -> ".join(node_str_arr)

    def __iter__(self):
        node = self.head
        while node != None:
            yield node
            node = node.next

    def rotate(self, N, k):
        if k < 1 or k > N:
            raise Exception("Invalid inputs: N = {}, k = {}".format(N, k))

        k = k % N
        l = N - k - 1 if k % 2 == 0 else N - k
        i = -1

        node = self.head
        while node != None:
            i += 1
            if i == l:
                new_head = node.next
                node.next = None
                node = new_head
                continue
            if i == N - 1:
                node.next = self.head
            node = node.next
        self.head = new_head

        return self

if __name__ == "__main__":
    s1 = LinkedList([2, 4, 7, 8, 9])
    print(s1)
    print(s1.rotate(5, 3))

    print('\n')

    s2 = LinkedList([1, 2, 3, 4, 5, 6, 7, 8])
    print(s2)
    print(s2.rotate(8, 4))
