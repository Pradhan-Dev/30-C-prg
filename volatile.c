#include <stdio.h>
int main() {
    volatile char *msg = "Hello, World!\n";
    printf("%s", msg);
    return 0;
}