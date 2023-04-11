//https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
//Successful Pairs of Spells and Potions
class Solution {
public:
    int solve(vector<int>& potions, long long success, long long a, int m){
        int s = 0;
        int e = m-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while(s <= e){
            long long b = potions[mid];
            if(a*b >= success){
                e = mid - 1;
                ans = mid;
            }
            else{
                s = mid+1;
            }
            
            mid = s + (e-s)/2;
        }
        
        return ans;
    }
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            long long a = spells[i];
            
            if(a >= success){
                ans.push_back(m);
                continue;
            }
            
            int index = solve(potions, success, a, m);
            
            if(index == -1){
                ans.push_back(0);
            }
            else{
                ans.push_back(m - index);
            }
        }
        
        return ans;
    }
};