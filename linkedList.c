#include <stdio.h>
#include <stdlib.h>

typedef struct node *ref;
struct node {
    int key;
    ref *next;
};

ref getNode(int k) {
    ref p;
    p = (ref)malloc(sizeof(struct node));
    if(p == NULL) {
        printf("Khong du bo nho");
        exit(0);
    }
    p->key = k;
    p->next = NULL;
    return p;
}

void addFirst(ref head, ref tail, int k) {
    ref p = getNode(k);
    if(head == NULL) {
        head = tail = p;
    } else {
        p->next = NULL;
        head = p;
    }
}

int main() {
    ref head = NULL, tail = NULL;
    int k;
    while (1)
    {
        printf("Nhap so nguyen (nhap 0 de thoat) :");
        scanf("%d", &k);
        if(k == 0) {
            break;
        }
        addFirst(head, tail, k);
    }
    
    return 0;
}