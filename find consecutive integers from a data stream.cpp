//https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/
//Find Consecutive Integers from a Data Stream
class DataStream {
public:
    DataStream(int value, int k) : val(value),x(k){   
    }
    bool consec(int num) {
        if (num==val) {
            ++c;
        } else {
            c=0;
        }
        return c>=x;
    }
private:
    int val;
    int x;
    int c=0;

};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
