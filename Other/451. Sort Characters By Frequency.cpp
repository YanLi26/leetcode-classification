/*
Given a string, sort it in decreasing order based on the frequency of characters.
*/

//http://www.cnblogs.com/grandyang/p/6231504.html
//overwrite compare 
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for (char c : s) ++m[c];
        sort(s.begin(), s.end(), [&](char& a, char& b){
            return m[a] > m[b] || (m[a] == m[b] && a < b);
        });
        return s;
    }
};