//
// Created by Dorsey.Xu on 2020/8/25.
//

#ifndef DATA_STRUCTURE_ALGORITHMS_MAXHEAP_H
#define DATA_STRUCTURE_ALGORITHMS_MAXHEAP_H

#include <vector>
#include <iostream>
using namespace std;


class MaxHeap
{
    vector<int> heap;

public:
    MaxHeap(vector<int>& nums)
            :
            heap(nums.begin(), nums.end())
    {
        build_max_heap();
    }

    vector<int> get_heap_array()
    {
        return heap;
    }

    void insert(int x)
    {
        heap.push_back(x);
    }

    // builds a max_heap from an unordered array
    void build_max_heap()
    {
        // from n / 2 to 1
        for(int i = get_parent_index(heap.size() - 1); i >= 0; --i) {
            max_heapify(i);
        }
    }

    // get the maximum value
    int get_max()
    {
        return heap[0];
    }

    // get the maxium value and removes it from the priority queue
    int extract_max()
    {
        int res = heap[0];
        heap[0]  = heap.back();
        heap.pop_back();
        max_heapify(0);
        return res;
    }

    // increase value at index to a new value k
    void increase_key(int index, int k)
    {
        heap[index] = k;
        max_heapify(index);
    }

    // correct a single violation of heap property in a subtree's root
    void max_heapify(int index)
    {
        int left = get_left_child_index(index);
        int right = get_right_child_index(index);

        if(right == -1) {
            if(heap[left] > heap[index]) {
                swap(heap[left], heap[index]);
            }
            return;
        }

        int max_index = left;
        int min_index = right;

        if(heap[left] < heap[right]) swap(max_index, min_index);
        if(heap[max_index] > heap[index]) {
            swap(heap[max_index], heap[index]);
            max_heapify(max_index);
        }
    }

    void display()
    {
        for(int h : heap) {
            cout << h << " ";
        }
        cout << "\n";
    }

private:
    int get_parent_index(int index)
    {
        if(index == 0) return -1;
        return (index - 1) / 2;
    }

    int get_left_child_index(int index)
    {
        int res = 2 * index + 1;
        if(res > heap.size()) return -1;
        return res;
    }

    int get_right_child_index(int index)
    {
        int res = 2 * index + 2;
        if(res > heap.size()) return -1;
        return res;
    }
};



#endif //DATA_STRUCTURE_ALGORITHMS_MAXHEAP_H
