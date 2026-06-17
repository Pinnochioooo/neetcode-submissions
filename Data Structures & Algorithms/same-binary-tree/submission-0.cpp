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
        bool flag = true;

    bool dfs(TreeNode* p , TreeNode* q){
        if(!p && !q){return flag;}
        if(!p && q){flag = false; return flag;}
        if(p && !q){flag = false;return flag;}

        if(p->val != q->val) {flag = false;return flag;}
        flag = dfs(p->left,q->left);
        flag = dfs(p->right,q->right);
        return flag;
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        flag = dfs(p,q);
        return flag;
    }
};
