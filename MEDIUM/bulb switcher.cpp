//https://leetcode.com/problems/bulb-switcher/
//Bulb Switcher

class Solution {
public:
    int bulbSwitch(int n) {
        long long num=1;
        int cnt=0;
        while((num*num)<=n){
            num++;
            cnt++;
        }
        return cnt;
    }
};