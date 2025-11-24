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
    int carry=0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first=l1;
        ListNode* second=l2;
        ListNode* answer=new ListNode();
        ListNode* ans=answer;

        while(first && second){
            int sum=first->val+second->val+carry;
            carry=0;
            if(sum>9){
                sum-=10;
                carry=1;
            }
            ListNode* ne=new ListNode(sum);
            ans->next=ne;
            ans=ans->next;
            first=first->next;
            second=second->next;
        }
        while(first){
            first->val+=carry;;
                carry=0;
                if(first->val>9){
                    carry=1;
                    first->val-=10;
                }
            ListNode* ne=new ListNode(first->val);
            ans->next=ne;
            ans=ans->next;
            first=first->next;
        }
        while(second){
            if(carry>0){
                second->val+=1;
                carry=0;
                if(second->val>9){
                    carry=1;
                    second->val-=10;
                }
            }
            ListNode* ne=new ListNode(second->val);
            ans->next=ne;
            ans=ans->next;
            second=second->next;
        }
        if(carry>0){
            ListNode* ne=new ListNode(1);
            ans->next=ne;
            ans=ans->next;
        }
        return answer->next;
    }
};