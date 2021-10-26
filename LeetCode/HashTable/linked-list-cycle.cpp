/**
 * Definition for singly-linked list.*/
//https://leetcode.com/problems/linked-list-cycle
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle1(ListNode *head) {
        map<ListNode*,int>hash;
       if(head==NULL)return false;
        while(head->next!=NULL)
        {   if(hash[head]==1)return true;
            hash[head]=1;
            head=head->next;
        }
        return false;
        
    }
    public:
    bool hasCycle(ListNode *head) {
       if(head==NULL)return false;
        auto headdude = head;
        while(head->next!=NULL)
        {  
            if(head->next==headdude)return true;
            auto temp=head->next;
            head->next=headdude;
            head=temp;
        }
        return false;
       
    }
    
};