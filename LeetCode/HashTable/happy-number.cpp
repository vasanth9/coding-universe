//https://leetcode.com/problems/happy-number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
         while (n != 1 && n != 4) {
            n = getNext(n);
        }
        return n == 1;
    }
      
    private: int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            totalSum += d * d;
        }
        return totalSum;
    }
};