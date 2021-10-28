//https://leetcode.com/problems/valid-perfect-square
class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=1,end=num;
        while(start<=end){
          
            int mid=start+(end-start)/2;
          
              
            if((num%mid==0)&&mid==num/mid) return true;
            if(mid>num/mid) end=mid-1;
            else start = mid+1;
        }return false;
    }
    
};