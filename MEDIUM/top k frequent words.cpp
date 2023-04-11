//https://leetcode.com/problems/top-k-frequent-words/
//Top K Frequent Words

class Solution {
public:
    bool static cmp(pair<int,string> p1,pair<int,string> p2){
        if(p1.first==p2.first){
            return p1.second<p2.second;
        }
        return p1.first>p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        vector<pair<int,string>> v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),cmp);
        vector<string> res;
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};