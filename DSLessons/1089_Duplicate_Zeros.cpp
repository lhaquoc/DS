#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    vector<int> result(arr.size());
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            // dich a[i+1] -> a[n-2] sang phai 1 o
            for(int j = n - 2; j >= i + 1; j--) {
                arr[j + 1] = arr[j];
            }
            if(i + 1 < n) {
                arr[i+1] = 0; // them so 0 vao o thu i + 1, ke tiep so 0
                i++;

            }
        }
    }
}

int main() {
    int arr[] = {1, 0, 0, 1};
    vector<int> v( arr, arr + sizeof(arr) / sizeof(int));
    duplicateZeros(v);
    for(int i = 0; i < v.size(); i++) {
        cout << " " << v[i] << " ";
    }
    return 0;
}