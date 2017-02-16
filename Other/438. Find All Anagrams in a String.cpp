/*
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
The order of output does not matter.
*/

//use two vector, one store p's elements, one compare the same length elements in s
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.empty() || p.empty() || s.size() < p.size()) return res;
        vector<int>pTag(256, 0), sTag(256, 0);
        for(char a: p){
            ++pTag[a];
        }
        for(int i = 0; i < p.size(); i++){
            ++sTag[s[i]];
        }
        if(pTag == sTag) res.push_back(0);
        for(int i = 1; i <= s.size() - p.size(); i++){
            --sTag[s[i-1]];
            ++sTag[s[i+p.size()-1]];
            if(sTag == pTag) res.push_back(i);
        }
        return res;
    }
};