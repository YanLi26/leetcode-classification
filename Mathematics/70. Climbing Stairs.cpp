/*You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

//Dynamic Programming
//like Fibonacci sequence stair[a] = stair[a-1] + stair[a-2];
//when you have n stairs that means you can get up from n-1 stair and n-2 stair

//http://www.cnblogs.com/grandyang/p/4079165.html
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;
        vector<int>stair(n);
        stair[0] = 1;
        stair[1] = 2;
        for(int i = 2; i < n; i ++){
            stair[i] = stair[i-1] + stair[i-2];
        }
        return stair.back();
    }
};