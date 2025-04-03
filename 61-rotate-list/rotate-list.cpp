class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int length = 1; 
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        k = k % length;
        if (k == 0) return head;  

        temp->next = head;

        int stepsToNewHead = length - k;
        temp = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = NULL;
        
        return newHead;
    }
};
