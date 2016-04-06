#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> &nums, int i1, int i2) {

    int temp = nums[i2];
    nums[i2] = nums[i1];
    nums[i1] = temp;
}

void perm(vector<vector<int>> &results, vector<int> &nums, int begin, int end) {
    if (begin == end) {
        results.push_back(nums);
    }

    for (int i = begin; i <= end; i++) {
        swap(nums, begin, i);
        perm(results, nums, begin + 1, end);
        swap(nums, begin, i);
    }
}

int main() {
    cout << "Hello, World!" << endl;


    vector<vector<int>> results;
    vector<int> nums = {1, 2, 3, 4};

    perm(results, nums, 0, nums.size() - 1);

    for (int i = 0; i < results.size(); i++) {
        for (int j = 0; j < results[i].size(); j++) {
            cout << results[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}