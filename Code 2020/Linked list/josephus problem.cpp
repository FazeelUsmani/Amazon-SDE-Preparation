#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void josephus(int n, int m){
    Node *head = new Node();
    head->data = 1;
    head->next = head;
    Node *prev = head;
    for(int i = 2;i<=n;i++){
        Node *temp = new Node();
        temp->data = i;
        temp->next = temp;
        prev->next = temp;
        prev = prev->next;
    }
    prev->next = head;

    Node *ptr = head;Node *ptr1 = head;
    while(ptr1 != ptr1->next){
        int count = 1;
        while(count != m){
            ptr = ptr1;
            ptr1 = ptr1->next;
            count++;
        }
        ptr->next = ptr1->next;
        free(ptr1);
        ptr1 = ptr->next;
    }

    cout<<ptr1->data;
}

int main(){
    josephus(14,2);
}