#include <stdio.h>

int main()
{
    float x;
    unsigned short a[10] = {0};
    unsigned short *pshort;
    unsigned long *plong;
    void *p;

    pshort = a; // tham chieu
    *pshort = 5; // tham tri
    printf("%d\n", a[0]);

    pshort = &a[2];
    *pshort = 19;
    printf("%d\n", a[2]);

    p = &x;
    *(float*)p = 1.5f;
    printf("%f", x);

    return 0; 
}