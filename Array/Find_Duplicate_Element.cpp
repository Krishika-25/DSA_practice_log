#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> s;

    for (int x : nums) {
        if (s.count(x)) {
            return x;
        }
        s.insert(x);
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << "Duplicate Element = " << findDuplicate(nums);

    return 0;
}