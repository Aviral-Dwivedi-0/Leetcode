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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        if(!head->next) return NULL;
        
        ListNode* temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        ListNode* current=head;
        int req=length-n;
        int index=0;
        if(req==0) return head->next;
        while(current && current->next){
            if(index==req-1){
                current->next=current->next->next;
                return head;
            }
            else{
                current=current->next;
                index++;
            }
        }
        current=NULL;
        return head;
    }
};