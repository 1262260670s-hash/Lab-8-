#include <stdio.h>

int ChangeRef(int *p) {
    *p = 100;
    return *p;
}

int main(void) {
    int b = 20;

    ChangeRef(&b);
    printf("After Call by reference, b = %d\n", b);

    return 0;
}
