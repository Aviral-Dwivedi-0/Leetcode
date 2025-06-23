/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        // if(root==nullptr) return {};
        // vector<int> answer;
        // answer.push_back(root->val);
        // vector<int> left=preorderTraversal(root->left);
        // vector<int> right=preorderTraversal(root->right);
        // answer.insert(answer.end(),left.begin(),left.end());
        // answer.insert(answer.end(),right.begin(),right.end());
        // return answer;
        TreeNode* temp=root;
        if(temp==nullptr) return {};
        vector<int> answer;
        stack<TreeNode*> st;
        st.push(temp);
        while(!st.empty()){
            TreeNode* number=st.top();
            st.pop();
            answer.push_back(number->val);
            if(number->right){
                st.push(number->right);
            }
            if(number->left){
                st.push(number->left);
            }
        }
        return answer;
    }
};