/*
Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?
*/

//if n is the power of 3 log10(n)/log10(3) is an integer
//if a number is a integer, it subtract its integer is 0
//eg. a-(int)a == 0

class Solution {
public:
    bool isPowerOfThree(int n) {
        return log10(n)/log10(3) - int(log10(n)/log10(3))==0;
    }
};