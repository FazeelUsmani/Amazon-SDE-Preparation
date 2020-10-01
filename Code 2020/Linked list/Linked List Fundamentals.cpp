#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node *head;
void insert(int x){
    Node *temp1 = head;
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head != NULL){
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    else{
        head = temp;
    }
}

void addafter(int x,int y){
    Node *temp = head;
    Node *pro;
    while(temp->data!=x){
        temp = temp->next;
    }
    // pro = temp->next;
    Node *a = new Node();
    a->data = y;
    a->next = temp->next;
    temp->next = a;
}
void printlist(){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void remove(int x){
    Node *temp = head;
    Node *prev;
    int c = 0;
    if(x == c){
       head = temp->next;
       delete temp;
    }
    else{
    while(c!= x){
        prev = temp;
        temp = temp->next;
        c++;
    }
    //Node *to = temp->next;
    prev->next = temp->next;
    delete temp;
    }
}
void deletelist(){
    Node *temp = head;
    Node* curr;
    while(temp!=NULL){
        curr = temp;
        free(temp);
        temp = temp->next;
    }
}
int lengthlist(){
    Node *temp = head;
    int c = 0;
    while(temp!=NULL){
        c++;temp = temp->next;
    }
    return c;
}
void togetnode(int x){
    Node *temp = head;
    int c = x;
    while(x-- && temp !=NULL){
        temp = temp->next;
    }
    if(temp == NULL)
        cout<<"No Element exists"<<endl;
    else
        cout<<"The element at position "<<c<<" from start is : "<<temp->data<<endl;
}
void togetnodefromend(int x,int l){
    Node *temp = head;
    int c = x;
    x = l-x;
    while(x-- && temp !=NULL){
        temp = temp->next;
    }
    if(temp == NULL)
        cout<<"No Element exists"<<endl;
    else
        cout<<"The element at position "<<c<<" from end is : "<<temp->data<<endl;    
}
void midelement(int l){
    if(l%2!=0){
        Node *temp = head;
        int c = l/2;
        while(c--){
            temp = temp->next;
        }
        cout<<"Mid element is : "<<temp->data<<endl;
    }
    else
        cout<<"No mid element"<<endl;
}

int main(){
    insert(10);
    insert(20);
    addafter(10,15);
    //remove(0);
    //deletelist();
    printlist();
    cout<<" "<<lengthlist()<<endl;
    int l = lengthlist();
    togetnode(2);
    togetnodefromend(3,l);
    midelement(l);
}