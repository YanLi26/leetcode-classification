/*
Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k), where h is the height of the person and k is the number of people in front of this person who have a height greater than or equal to h. Write an algorithm to reconstruct the queue.
*/

//http://www.cnblogs.com/grandyang/p/5928417.html
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        sort(people.begin(), people.end(), comFunction);
        vector<pair<int, int>> res;
        for (auto peoPair : people) {
            res.insert(res.begin() + peoPair.second, peoPair);
        }
        return res;
    }
    static bool comFunction(const pair<int, int>& a, const pair<int, int>& b){
        return a.first > b.first || (a.first == b.first && a.second < b.second);
    }
};