#include<iostream>
using namespace std;

//Declaring a node
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

//Inserting at tail
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
};

//displaying all the elements in the linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    { 
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

//Inserting a new node in sorted linked list
node * insertInSortedLinkedList(node * & head,int data){
    node * temp;
    node * newNode=new node(data);
    int key=data;

    //if linked list is empty or the new element has to be inserted at the beginning
    if(head==NULL || key<head->data){
        newNode->next=head;
        head=newNode;
    }
    else{
        //Traversing over the linked list to find the position to insert the element
        temp=head;
        while(temp->next !=NULL && temp->next->data<key){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}


int main(){
    
    node *head = NULL;
    insertAtTail(head, 25);
    insertAtTail(head, 36);
    insertAtTail(head, 47);
    insertAtTail(head, 58);
    insertAtTail(head, 69);
    insertAtTail(head, 80);
    display(head);
    insertInSortedLinkedList(head,19);
    display(head);
    insertInSortedLinkedList(head,100);
    display(head);
    insertInSortedLinkedList(head,5);
    display(head);





    return 0;
}