class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* curr = head, *prev = NULL;
        
        while(curr != NULL){
            ListNode* forw = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            curr = forw;
        }
        
        return prev;
    }
};
