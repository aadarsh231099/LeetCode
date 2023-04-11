//https://leetcode.com/problems/first-unique-character-in-a-string/
//First Unique Character in a String
class Solution {
public:
    int firstUniqChar(string s) {
        using IT = list<int>::iterator;

    	list<int> can;
    	unordered_map<char, IT> mp;
    	for (int i = 0; i < s.length(); ++i) {
    		const auto c = s[i];
    		if (mp.count(c)) {
    			if (mp[c] != can.end()) {
    				can.erase(mp[c]);
    			}
    			mp[c] = can.end();
    		} else {
    			mp[c] = can.emplace(can.end(), i);
    		}
    	}
    	return can.empty() ? -1 : can.front();
    }
};