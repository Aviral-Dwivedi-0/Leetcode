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
    bool isPalindrome(ListNode* head) {
        string number="";
        ListNode* temp=head;
        while(temp){
            number+=temp->val -'0';
            temp=temp->next;
        }
        int l=number.size()-1;
        int i=0;
        while(i<l){
            if(number[i]!=number[l]) return false;
            i++;
            l--;
        }
        return true;
    }
};