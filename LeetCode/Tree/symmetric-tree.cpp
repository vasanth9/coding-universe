//https://leetcode.com/problems/symmetric-tree
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       return isSame(root->left,root->right);
    }
    bool isSame(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val!=q->val) return false;
        return isSame(p->left,q->right)&&isSame(p->right,q->left);
    }
};