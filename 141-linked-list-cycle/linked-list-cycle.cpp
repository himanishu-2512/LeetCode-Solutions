/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *curr=head;
        if(head==NULL)return false;
        ListNode *prev=head->next;
        while(prev!=NULL){
        if(curr==prev)return true;
        if(prev->next!=NULL)
        prev=prev->next->next;
        else prev=prev->next;
        curr=curr->next;
        }
        return false;
    }
};