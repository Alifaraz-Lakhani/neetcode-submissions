class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = head;
        ListNode* slow = dummy;

        int k = 0;

        while(fast){
            k++;
            fast = fast->next;

            if(k > n)
                slow = slow->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
    }
};