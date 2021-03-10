#include <iostream>
#include <vector>

using namespace std;

int countNumOfDigits(int n);

int findNumbers(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(countNumOfDigits(nums[i]) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int countNumOfDigits(int n) {
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    
    return count;
}

int main() {
    int arr[] = {12, 345, 2, 6, 7896};

    vector<int> a(arr, arr  + (sizeof(arr) / sizeof(int)));



    cout << findNumbers(a) << endl;

    return 0;
}
