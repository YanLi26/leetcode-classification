/*
Given a roman numeral, convert it to an integer.
Input is guaranteed to be within the range from 1 to 3999.
*/

/*Roman to Interger
I: 1; V: 5; X: 10; L: 50;
C: 100; D: 500; M: 1000;
*/

//left number > right number: left number + right number
//left number < right number: right number - left number

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int res = map[s.back()];
        for(int i = s.size() - 1; i > 0; i--){
            if(map[s[i]] > map[s[i-1]]) res -= map[s[i-1]];
            else res += map[s[i-1]];
        }
        return res;
    }
};