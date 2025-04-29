#include <stdio.h>
int main() {
    char *s = "Hello, World!\n";
    while (*s) putchar(*s++);
    return 0;
}