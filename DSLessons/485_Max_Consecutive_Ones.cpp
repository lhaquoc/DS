#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int max_count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            count = 0;
        } else {
            count++;
            max_count = (count > max_count) ? count : max_count;
        }
    }
    return max_count;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};

    vector<int> a(arr, arr  + (sizeof(arr) / sizeof(int)));

    cout << findMaxConsecutiveOnes(a) << endl;

    return 0;
}