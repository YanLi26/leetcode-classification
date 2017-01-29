/*
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
*/

//sum is the sum of every bit, carry store carry
//if carry == 0 return sum
//recursion

class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0) return a;
        int sum = 0, carry = 0;
        sum = a ^ b;
        carry = a & b;
        carry <<= 1;
        return getSum(sum, carry);
    }
};