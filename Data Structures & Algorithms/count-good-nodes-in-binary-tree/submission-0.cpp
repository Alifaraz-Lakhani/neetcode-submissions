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
    int good=0;
    int goodNodes(TreeNode* root) {
        stack <pair<TreeNode*, int>> st;
        st.push({root, root->val});
        while(!st.empty()){
            auto temp=st.top(); st.pop();
            if(temp.first->val >= temp.second) good++;
            if(temp.first->left) st.push({temp.first->left, max(temp.first->val, temp.second)});
            if(temp.first->right) st.push({temp.first->right, max(temp.first->val, temp.second)});
        }
        return good;
    }
};
