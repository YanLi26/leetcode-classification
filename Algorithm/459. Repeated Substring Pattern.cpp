/*
Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.
*/

//KMP Algorithm
//http://www.cnblogs.com/grandyang/p/6087347.html

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int i = 1, j = 0, n = str.size();
        vector<int> dp(n + 1, 0);
        while (i < n) {
            //if str and substr is same, both of them add one
            if (str[i] == str[j]) dp[++i] = ++j;
            //if str != substr and index is at the beginning of substr, ++i
            else if (j == 0) ++i;
            //if str != substr, return index to the matching position
            else j = dp[j];
        }
        //if the last number is not 0 and n - dp[n] is length of a string
        return dp[n] && (dp[n] % (n - dp[n]) == 0);
        }
};