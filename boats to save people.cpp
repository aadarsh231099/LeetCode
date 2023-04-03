//https://leetcode.com/problems/boats-to-save-people/
//Boats to Save People

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int res=0;
        int l =0,r=people.size()-1;
        while (l<=r) {
            ++res;
            if (people[l]+people[r]<=limit) {
                ++l;
            }
            --r;
        }
        return res;
    }
};