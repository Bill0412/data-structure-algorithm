//
// Created by Dorsey.Xu on 2020/9/4.
//

#ifndef DATA_STRUCTURE_ALGORITHMS_COMMON_H
#define DATA_STRUCTURE_ALGORITHMS_COMMON_H

#include <vector>
#include <iostream>
using namespace std;


class Common {
public:
    static void displayVector1D(vector<int>& nums)
    {
        for(auto n : nums) {
            cout << n << " ";
        }
        cout << endl;
    }
};


#endif //DATA_STRUCTURE_ALGORITHMS_COMMON_H
