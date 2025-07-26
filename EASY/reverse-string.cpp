//https://leetcode.com/problems/reverse-string/description/
// 344. Reverse String

//Sol1
class Solution {
public:
    void reverseString(vector<char>& s) {
    reverse(s.begin(),s.end());
}
};

//Sol2
class Solution {
public:
    void reverseString(vector<char>& s) {
        int f =0;
        int l =s.size()-1;
        char temp;
        while(f<l){
            temp = s[f];
            s[f]=s[l];
            s[l]=temp;
            f++;l--;
        }
    }
};

