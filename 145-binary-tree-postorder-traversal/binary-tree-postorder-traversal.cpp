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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr) return {};
        TreeNode* current=root;
        vector<int> answer;
        vector<int> left=postorderTraversal(root->left);
        answer.insert(answer.end(),left.begin(),left.end());
        vector<int> right=postorderTraversal(root->right);
        answer.insert(answer.end(),right.begin(),right.end());
        answer.push_back(root->val);
        return answer;
    }
};