/**
  Definition for a binary tree node. */
  //https://leetcode.com/problems/binary-tree-inorder-traversal
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
    vector<int>inorder;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorderI(root);
        return inorder;
    }
   void inorderR(TreeNode* root){
       //Recursive
        if(root!=NULL){inorderR(root->left);
        inorder.push_back(root->val);
        inorderR(root->right);}
    }
    void inorderI(TreeNode* root){
        //Iterative
        stack<TreeNode*>instack;
        TreeNode* curr = root;
        while(curr!=NULL||!instack.empty()){
            while(curr!=NULL){
                instack.push(curr);
                curr=curr->left;
            }
            curr=instack.top();
            cout<<curr->val<<"\n";
            instack.pop();
            inorder.push_back(curr->val);
            curr=curr->right;
        }
    }
};