/*
Winter is coming! Your first job during the contest is to design a standard heater with fixed warm radius to warm all the houses.
Now, you are given positions of houses and heaters on a horizontal line, find out minimum radius of heaters so that all houses could be covered by those heaters.
So, your input will be the positions of houses and heaters seperately, and your expected output will be the minimum radius standard of heaters.
*/

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int radius = 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        for(int i = 0, j = 0; i < houses.size(); i++){
            while(j<heaters.size()-1 && abs(houses[i] - heaters[j]) >= abs(houses[i] - heaters[j+1])) j++;
            radius = max(radius, abs(houses[i] - heaters[j]));
        }
        return radius;
    }
};