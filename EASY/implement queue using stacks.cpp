//https://leetcode.com/problems/implement-queue-using-stacks/
//Implement Queue using Stacks
class MyQueue {
public:
    stack<int> A ,B;
    MyQueue() {
        
    } 
    void push(int x) {
        while(!A.empty()){
            B.push(A.top());
            A.pop();
        }
        A.push(x);
        while(!B.empty()){
            A.push(B.top());
            B.pop();
        }
    }
    
    int pop() {
        if(!A.empty()){
            int ans = A.top();
            A.pop();
            return ans;
        }
        return -1;
    }
    
    int peek() {
        return A.top();
    }
    
    bool empty() {
        return A.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */