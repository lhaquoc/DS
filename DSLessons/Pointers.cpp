#include <stdio.h>
#include <math.h>
template <class T>
void swap(T *x, T *y)
{
    T u = *x;
    *x = *y;
    *y = u;
}

template <class T>
void adjust(T *x, T *y)
{
    if(abs(*x) > fabs(*y)) 
        swap(&(*x), &(*y));
}

int indexMinAbs(float a[], int n)
{
    int i = 1;
    int idx = 0;
    while(i < n) {
        if(fabs(a[i]) < fabs(a[idx])))
            idx = i;
        i++;
    }
    return idx;
}

float* pointerMinAbs(float a[], int n) {
    int i = 1;
    int idx = 0;
    while(i < n) {
        if(fabs(a[i]) < fabs(a[idx])))
            idx = i;
        i++;
    }
    return &a[idx];
}

void UpperCase(unsigned char* pCh)
{
    if(*pCh >= 'a' && *pCh <= 'z')
    {
        *pCh -= 32;
    }
}

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
    printf("%f\n", x);

    // chuyen doi chu thuong sang chu hoa
    unsigned char ch;
    printf("Input a character: ");
    scanf("%c", &ch);
    UpperCase(&ch);
    printf("After to uppercase: %c\n", ch);
    return 0; 
}