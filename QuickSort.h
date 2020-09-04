//
// Created by Dorsey.Xu on 2020/9/4.
//

#ifndef DATA_STRUCTURE_ALGORITHMS_QUICKSORT_H
#define DATA_STRUCTURE_ALGORITHMS_QUICKSORT_H
#include "Common.h"
#include<vector>

using namespace std;

class QuickSort {
public:
    void quickSort(vector<int>& nums) {
        quickSortUtil(nums, 0, nums.size() - 1);
    }
private:

    void quickSortUtil(vector<int> &nums, int left, int right) {
        if(left >= right) return;

        int pivot_index = partition(nums, left, right);

        quickSortUtil(nums, left, pivot_index - 1);
        quickSortUtil(nums, pivot_index + 1, right);
    }

    int partition(vector<int> &nums, int left, int right) {
        int i = left - 1;
        int pivot = right;
        for(int j = left; j < right; ++j) {
            if(nums[j] < nums[pivot]) swap(nums[j], nums[++i]);
        }
        swap(nums[pivot], nums[++i]);
        return i;
    }

};

void TestQuickSort()
{

    vector<int> nums = {3, 23, 43, 22, 100, 21, 1, 16};

    Common::displayVector1D(nums);
    QuickSort qs;
    qs.quickSort(nums);
    Common::displayVector1D(nums);

}

#endif //DATA_STRUCTURE_ALGORITHMS_QUICKSORT_H
