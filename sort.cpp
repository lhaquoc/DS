#include <iostream>

using namespace std;

void printArray(int s, int a[], int size) {
    cout << s << ": ";
    for(int i = 0; i < size; i++) {
        cout << " " << a[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int n) {
    
}

void insertSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printArray(i, a, n);
    }
}

void bubbleSort(int a[], int n) {
    
    for(int i = 0; i < n; i++) {
        bool isSorted = true;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                isSorted = false;
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        printArray(i, a, n);
        if(isSorted)
            break;
    }
}

int main() {
    int a[] = {5, 3, 1, 7, 8, 1, 2};
    int n = sizeof(a)/sizeof(a[0]);
    //bubbleSort(a, n);
    insertSort(a, n);
    return 0;
}