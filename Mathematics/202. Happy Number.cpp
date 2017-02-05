/*
Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
*/

//if this number is not a happy number, it will have a loop
//tip: checkLoop before push_back(n)

class Solution {
public:
    bool isHappy(int n) {
        if(n == 0) return false;
        vector<int> checkLoop;
        while(1){
            int tmp = 0;
            while(n){
                tmp += (n%10)*(n%10);
                n /= 10;
            }
            n = tmp;
            if(n == 1) return true;
            else if(find(checkLoop.begin(), checkLoop.end(), n) != checkLoop.end()) return false;
            if(n!=0) checkLoop.push_back(n);
        }
    }
};