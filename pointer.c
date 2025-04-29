#include <stdio.h>
int hello() {
    printf("Hello, World!\n");
    return 0;
}
int main() {
    int (*f)() = hello;
    return f();
}