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

    bool sametree(TreeNode* p,TreeNode* q){
        if(!p && q)return false;
        if(p && !q)return false;
        
        if(!p && !q)return true;

        if(p->val != q->val)return false;

        return sametree(p->left,q->left) && sametree(p->right,q->right);
    
    }



    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
       if(sametree(root,subRoot)){return true;}
else{
       if(root == NULL)return false;
    if(isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot)) return true;
        }
       

            
return false;
    }
};
