//https://leetcode.com/problems/smallest-number-in-infinite-set/
//Smallest Number in Infinite Set

class SmallestInfiniteSet {
public:
 bool a[1001];
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++){
            a[i]=1;
        }
    }
    int popSmallest() {
        int i=1;
        while(a[i]!=1)
        i++;
        a[i]=0;
        return i;
    }
    void addBack(int num) {
        a[num]=1;
    }
};
/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */