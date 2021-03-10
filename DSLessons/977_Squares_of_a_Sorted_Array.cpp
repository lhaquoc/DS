#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> res(nums.size(), 0);
    int n = nums.size();

    // tim i, j
    // tim i: la so am cuoi cung trong mang
    int i = -1;
    while ((i + 1) < n && nums[i + 1] < 0)
    {
        i++;
    }
    // tim j: la gia tri khong am cuoi cung trong mang
    int j = n;
    while ((j - 1) >= 0 && nums[j - 1] >= 0)
    {
        j--;
    }
    // cout << " i = " << i << " j = " << j << endl;
    int k = 0;
    while (i >= 0 || j < n)
    {
        if(i >= 0 && j < n) {
            int  ii = nums[i] * nums[i];
            int jj = nums[j] * nums[j];

            if(ii <= jj) {
                res[k] = ii;
                i--;
                k++;  
            } else {
                res[k] = jj;
                j++;
                k++;
            }
        } else if(i >= 0) {
            res[k] = nums[i] * nums[i];
            i--;
            k++;
        } else {
            res[k] = nums[j] * nums[j];
            j++;
            k++;
        }
    }
    

    return res;
}

int main() {
    int arr[] = {-4, -1, 0, 3, 10};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(int));
    vector<int> result = sortedSquares(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << " " << result[i] << " ";
    }
    return 0;
}