/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr ;
        ListNode *cur=head;
        while(cur){
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        ListNode* fast=head, *slow=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* rev=reverseList(slow->next);
        slow->next=NULL;
        while(rev){
            ListNode* temp1 = head->next;
            ListNode* temp2 = rev->next;

            head->next = rev;
            rev->next = temp1;

            head = temp1;
            rev = temp2;
        }
    }
};
