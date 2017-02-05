/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
*/

//if the sum of numbers less than one number, return this number
//the result is the maximum sum of numbers
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp = 0, res = INT_MIN;
        for(int num:nums){
            tmp = max(tmp + num, num);
            res = max(res, tmp);
        }
        return res;
    }
};