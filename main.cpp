#include <iostream>

#define NMAX 10

using namespace std;

void AddElement(int a[], int &n, int val, int pos) {
    // kiem tra mang da day, khong the them
    if(n >= NMAX)
        return;
    // them dau mang
    if(pos < 0)
        pos = 0;
    else if (pos > n)
            pos = n;
    
    // dich chuyen mang de tao o trong truoc khi them
    for(int i = n; i > pos; i--) {
        a[i] = a[i-1];
    }
    a[pos] = val;
    ++n;
}

void RemoveElement(int a[], int &n, int pos) {
    // kiem tra mang, mang rong khong the xoa
    if(n <= 0)
        return;
    if(pos < 0)
        pos = 0;
    else if(pos >= n)
            pos = n - 1;

    // dich chuyen mang
    for(int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    --n;
}

int main() {
    int a[] = {1,2,3,4,5};
    int n = 5;
    AddElement(a, n, 3, -1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}