//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
//Sort Integers by The Number of 1 Bits

class Solution {
public:
	vector<int> sortByBits(vector<int>& arr) {
		vector<vector<int>> v;
		for(int i=0;i<arr.size();i++) {
			int temp=arr[i],c=0;
			while(temp) {
				if(temp&1) c++;
				temp>>=1;
			}
			v.push_back({c,arr[i]});
		} 
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++) {
			arr[i]=v[i][1];
		}
		return arr;
	}
};