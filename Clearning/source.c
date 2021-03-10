#include "header.h"
#include <limits.h>
#include <stdio.h>

int main() {

    int checked_num = INT_MAX / 10;
    int error_num = INT_MAX  + 1;
    printf("%d\n", error_num);
    printf("%d\n", INT_MAX);
    printf("%d\n", checked_num);
    int cond = checked_num * 10;
    while(cond < INT_MAX) {
        cond++;
        printf("%d\n", cond);
        if(cond > INT_MAX) 
            printf("over!\n");
        else
            printf("no over!\n");     
    }
     
    return 0;
}
