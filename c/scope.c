#include <stdio.h>



int add(int x, int y) {
    int result = x + y;

    return result;
}

int main() {
    // int result = 0;
    // int result = 1; // Note: Variables in the same scope
    //                 // can NOT share same name! C does not
    //                 // reallocate the values!

    int result = add(3, 4);
    printf("%d", result);

    return 0;
}

