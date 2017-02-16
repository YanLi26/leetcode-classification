/*
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.
*/

//use string tmp
class Solution {
public:
    string countAndSay(int n) {
        if(n<=0)return NULL;
        string res;
        res.push_back('1');
        if(n==1) return res;
        
        for(int i = 1; i < n; i++){
            string tmp;
            int count = 1;
            for(int j = 0; j < res.size(); j++){
                if(j == res.size() - 1){
                    tmp.push_back(count+'0');
                    tmp.push_back(res[j]);
                }
                else if(res[j+1] == res[j]) count++;
                else{
                    tmp.push_back(count+'0');
                    tmp.push_back(res[j]);
                    count=1;
                }
            }
            res = tmp;
        }
        return res;
    }
};