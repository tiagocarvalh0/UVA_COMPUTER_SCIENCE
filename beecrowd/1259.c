#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y) { // inOrder
    return (*(int*)y) - (*(int*)x);
}

int comp(const void *x, const void *y) {
    return (*(int*)x) - (*(int*)y); // inversOrder
}

int main() {
    int x, y = 0, z = 0, t;

    scanf("%d", &x);
    int list1[x], list2[x];
    for(int i = 0; i < x; i++) {
        scanf("%d", &t);
        if(t % 2 == 0) {
            list1[y] = t;
            ++y;
        }
        else {
            list2[z] = t;
            ++z;
        }
    }

    qsort(list1, y, sizeof(int), &comp);
    qsort(list2, z, sizeof(int), &cmp);

    for(int i = 0; i < y; i++)
        printf("%d\n", list1[i]);
    for(int i = 0; i < z; i++)
        printf("%d\n", list2[i]);
    return 0;
}