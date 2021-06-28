#include <iostream>
#include <vector>

using namespace std; 

int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int curIndex = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != val) {
            nums[curIndex] = nums[i];
            curIndex++;
        }
    }
    return curIndex;
}
int main() {
    int arr[] = {0,1,2,2,3,0,4,2};
    int val = 2;

    vector<int> a(arr, arr + sizeof(arr) / sizeof(int));

    int n = removeElement(a, val);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}