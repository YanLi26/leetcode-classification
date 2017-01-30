/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
*/

//it is repeating decimal, every 9 digits repeat forever

class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};