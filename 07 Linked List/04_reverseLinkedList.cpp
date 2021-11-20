#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

struct ListNode
{
    ll data;
    ListNode *next;

    ListNode (int x)
    {
        data = x;
        next = NULL;
    }
};

ListNode* reverseList(ListNode* head)
{

        ListNode* prev = NULL, *nxt = NULL, *curr = head;

        while(curr != NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;

}

void print(ListNode *head)
{
    while(head != NULL)
    {
        cout<< head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    eff;
    int n;
    cin>>n;
    int data;
    cin>>data;
    ListNode *head = new ListNode(data);
    ListNode *temp = head;
    for(int i =0; i<n-1; i++)
    {
        cin>>data;
        temp->next = new ListNode(data);
        temp = temp->next;
    }
    head = reverseList(head);
    print(head);
    return 0;
}