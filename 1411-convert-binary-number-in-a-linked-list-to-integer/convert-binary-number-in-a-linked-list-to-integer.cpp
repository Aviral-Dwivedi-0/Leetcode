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
    int getDecimalValue(ListNode* head) {
        ListNode* temp= head;
        int counter=0;
        string str="";
        while(temp!=NULL){
            str=str+to_string(temp->val);
            temp=temp->next;
            counter++;
        }
        int cn=0;
        for(int i=0;i<counter;i++){
            if(str[i]=='1'){
                cn=cn+pow(2,(counter-1-i));
            }
        }
        return cn;
    }
};