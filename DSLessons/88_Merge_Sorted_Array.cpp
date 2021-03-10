#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& ai, int ni, vector<int>& aj, int nj) {
    int i = ni - 1;
    int j = nj - 1;
    int k = ni + nj - 1;
    while (i >= 0 || j >=0)
    {
       if(i >=0 && j >= 0) { // ca i va j deu hop le
           if(ai[i] >= aj[j]) {
               ai[k--]  = ai[i--];
           } else {
               aj[k--]  = aj[j--];
           }           
       } else if(i >= 0) { // chi co i hop le
            ai[k--]  = ai[i--];
       } else { // chi co j hop le
            aj[k--]  = aj[j--];
       }
    }
    
}

int main() {
    int n1 = 3;
    int n2 = 3;

    int arr1[] = {1, 2, 3, 0, 0, 0};
    int arr2[] = {2, 5, 6};
    
    vector<int> v1(arr1, arr1 + sizeof(arr1) / sizeof(int));
    vector<int> v2(arr2, arr2 + sizeof(arr2) / sizeof(int));

    merge(v1, n1, v2, n2);
    
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}