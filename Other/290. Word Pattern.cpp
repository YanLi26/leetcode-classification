/*
Given a pattern and a string str, find if str follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.
*/

//use map to map char and string
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> patternMap;
        int j = 0, count = 1;;
        for(int i = 0; i < pattern.size(); i++){
            string tmp;
            for(; j < str.size(); j++){
                if(str[j] == ' '){
                    count++;
                    j++;
                    break;
                }
                tmp.push_back(str[j]);
            }
            if(patternMap.find(pattern[i]) == patternMap.end()){
                for(auto it = patternMap.begin(); it != patternMap.end(); ++it) {
                    if (it->second == tmp) return false;
                }
                patternMap[pattern[i]] = tmp;
            }
            else if(patternMap[pattern[i]] != tmp) return false;
        }
        if(j!=str.size() || count != pattern.size()) return false;
        return true;
    }
};