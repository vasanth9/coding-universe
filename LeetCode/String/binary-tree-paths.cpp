/**
 * Definition for a binary tree node.*/
//https://leetcode.com/problems/binary-tree-paths
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
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>result;
       rootleafpath(root,"",result);
        return result;
    }
    private: void rootleafpath(TreeNode* root,string x,vector<string>&result){
        if(root->left==NULL && root->right==NULL){
             x=x+to_string(root->val);
            cout<<x<<"\n";
            result.push_back(x);
        }
        else{
            x=x+to_string(root->val)+"->";
            if(root->left){
                rootleafpath(root->left,x,result);
            }
            if(root->right){
                rootleafpath(root->right,x,result);
            }
        }
    }
};