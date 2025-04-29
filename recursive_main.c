#include <stdio.h>
int main() {
    static int i = 0;
    if (i == 0) {
        i = 1;
        main();
    } else {
        printf("Hello, World!\n");
    }
    return 0;
}