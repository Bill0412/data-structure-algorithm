#include <iostream>
#include <vector>
#include "MaxHeap.h"

using namespace std;



int main() {
    vector<int> nums{1, 2, 3, 4, 5};

    MaxHeap maxHeap(nums);
    maxHeap.display();

    for(int i = 0; i < 5; ++i) {
        cout << maxHeap.extract_max() << endl;
        maxHeap.display();
    }

    return 0;
}
