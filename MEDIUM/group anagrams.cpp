//https://leetcode.com/problems/group-anagrams/
//Group Anagrams

//Sol1
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (const auto& str : strs) {
            string temp{str};
            sort(temp.begin(), temp.end());
            groups[temp].emplace_back(str);
        }

        vector<vector<string>> ana;
        for (const auto& k : groups) {
            vector<string> grp;
            for (const auto& str : k.second) {
                grp.emplace_back(str);
            }
            sort(grp.begin(), grp.end());
            ana.emplace_back(move(grp));
        }

        return ana;
    }
};

//Sol2
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strmap;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            strmap[temp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& it:strmap){
            res.push_back(it.second);
        }
        return res;
    }
};