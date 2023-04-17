//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
//Kids With the Greatest Number of Candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies,int extraCandies) {
        const auto& mnum=*max_element(cbegin(candies),cend(candies));
        vector<bool> res;
        transform(cbegin(candies),cend(candies),back_inserter(res),
                  [&extraCandies,&mnum](const auto& x) {
                      return x + extraCandies>=mnum;
                  });
        return res; 
    }
};