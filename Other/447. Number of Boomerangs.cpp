/*
Given n points in the plane that are all pairwise distinct, a "boomerang" is a tuple of points (i, j, k) such that the distance between i and j equals the distance between i and k (the order of the tuple matters).
*/

//n*(n-1)

class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for(int i = 0; i < points.size(); i++){
            unordered_map<double, int> tmp;
            for(int j = 0; j < points.size(); j++){
                tmp[pow(points[i].first-points[j].first,2)+pow(points[i].second-points[j].second,2)]++;
            }
            
            for(auto it = tmp.begin(); it != tmp.end(); it++){
                res += (it->second)*(it->second - 1);
            }
        }
        return res;
    }
};