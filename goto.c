#include <stdio.h>
int main() {
    goto hello;
hello:
    printf("Hello, World!\n");
    return 0;
}