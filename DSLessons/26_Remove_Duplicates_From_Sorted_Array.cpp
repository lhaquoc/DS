#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& a) {
    int n = a.size();
    int curIndex = 0;

    if (n == 0){
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != a[curIndex]) {
            curIndex++;
            a[curIndex] = a[i];
        }
    }
    return curIndex + 1;
}

int main() {
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    vector<int> a(arr, arr + sizeof(arr) / sizeof(int));

    int n = removeDuplicates(a);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}