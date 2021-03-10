#include <stdio.h>

void findPair(int arr[], int n, int sum) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Paird foudn at %d and %d", i, j);
                return;
            }
        }
    }
    printf("pair not found");
}

int main() {    
    int arr[] = {8, 7, 2, 5, 3, 1};
    int sum = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    findPair(arr, n, sum);
    return 0;
}