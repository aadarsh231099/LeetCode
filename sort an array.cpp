//https://leetcode.com/problems/sort-an-array/
//Sort an Array
class Solution {
public:
    void quicksort(vector<int>& nums, int start, int end) {
        if (start >= end) return; 

        int pivot = nums[start + (end - start) / 2];
        int i = start, j = end;

        while (i <= j) {
            while (nums[i] < pivot) i++;
            while (nums[j] > pivot) j--;
            if (i <= j) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        quicksort(nums, start, j);
        quicksort(nums, i, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};
