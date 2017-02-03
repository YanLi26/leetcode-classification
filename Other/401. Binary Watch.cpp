/*
A binary watch has 4 LEDs on the top which represent the hours (0-11), and the 6 LEDs on the bottom represent the minutes (0-59).
Each LED represents a zero or one, with the least significant bit on the right.
*/

//traverse all posibilities, count 1s

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int hour = 0; hour < 12; hour++){
            for(int min = 0; min < 60; min++){
                if(bitset<10>((hour<<6) + min).count() == num)
                    res.push_back(to_string(hour) + (min<10 ? ":0" : ":") + to_string(min));
            }
        }
        return res;
    }
};