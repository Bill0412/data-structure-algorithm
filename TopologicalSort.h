//
// Created by Dorsey.Xu on 2020/8/25.
//

#ifndef DATA_STRUCTURE_ALGORITHMS_TOPOLOGICALSORT_H
#define DATA_STRUCTURE_ALGORITHMS_TOPOLOGICALSORT_H

#include<vector>
using namespace std;

class TopologicalSort {
private:
    struct Node {
        int state;  // 0: not processed; 1: processing; 2: processed
        int index;
        vector<int> successors;
    };
    int size;

};


#endif //DATA_STRUCTURE_ALGORITHMS_TOPOLOGICALSORT_H
