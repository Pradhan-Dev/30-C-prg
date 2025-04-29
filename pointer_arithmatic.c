#include <stdio.h>
int main() {
    char s[] = "Hello, World!\n";
    char *p;
    for (p = s; *p; ++p) putchar(*p);
    return 0;
}