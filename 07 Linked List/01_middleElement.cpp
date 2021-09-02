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

int getMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }

int main(){
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
    cout<<getMiddle(head)<<endl;
    return 0;
}