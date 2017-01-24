/*
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
*/

//use copy to identify the highest 1
//use xor to change bit from 1 to 0, 0 to 1
class Solution {
public:
    int findComplement(int num) {
        int copy = num;
        int i = 0;
        while(copy != 0){
            num ^= (1 << i);
            i++;
            copy >>= 1;
        }
        return num;
    }
};