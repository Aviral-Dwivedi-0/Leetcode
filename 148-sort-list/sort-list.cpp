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
    ListNode* sortList(ListNode* head) {
        vector<int> data;
        if(!head || !head->next) return head;
        ListNode* temp=head;
        while(temp){
            data.push_back(temp->val);
            temp=temp->next;
        }
        sort(data.begin(),data.end());
        temp=head;
        int counter=0;
        while(temp){
            temp->val=data[counter];
            counter++;
            temp=temp->next;
        }
        return head;
    }
};