//https://leetcode.com/problems/validate-stack-sequences/
//Validate Stack Sequences

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int ptr=0;
         for(int i=0;i<pushed.size();i++){
             st.push(pushed[i]);
             while(st.size()>0&&st.top()==popped[ptr]){
                  st.pop();
                  ptr++;
           }
        }
        return st.size()==0;
    }
};