/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
*/

//O(1) O(1)
//caculate the number of 1 in (x xor y)
//tips: x >>= 1
class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = 0;
        x ^= y;
        for(int i = 0; i < 32; i++){
            if(x & 1 == 1) res++;
            x >>= 1;
        }
        return res;
    }
};