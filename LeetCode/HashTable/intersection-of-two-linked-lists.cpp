//https://leetcode.com/problems/intersection-of-two-linked-lists
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  class Solution {
public:
    ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB) {
        map<ListNode *,int>hash;
        while(headA!=NULL){
            hash[headA]=1;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(hash[headB]==1)return headB;
            headB=headB->next;
        }
        return NULL;
    }
    public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=length(headA),lenB=length(headB);
       while(lenA>lenB){
            lenA--;
            headA=headA->next;
        }
        while(lenA<lenB){
            lenB--;
            headB=headB->next;
        }
       while(headA!=headB){
           headA=headA->next;
           headB=headB->next;
       }
       
        return headA;
    }
    private: int length(ListNode *head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }return count;
    }
};