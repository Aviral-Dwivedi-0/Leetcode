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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        // set<ListNode*> s;
        // while(temp1){
        //     s.insert(temp1);
        //     temp1=temp1->next;
        // }
        // while(temp2){
        //     if(s.find(temp2) == s.end()){
        //         s.insert(temp2);
        //     temp2=temp2->next;
        //     }
        //     else
        //     return temp2;
        // }
        // return NULL;

        while(temp1 && temp2){
            if(temp1 ==temp2) return temp1;
            if(!temp1->next && !temp2->next) return NULL;
            if(temp1->next) temp1=temp1->next;
            else temp1=headB;
            if(temp2->next) temp2=temp2->next;
            else temp2=headA;
        }
        return NULL;
    }
};