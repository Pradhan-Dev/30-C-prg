#include <stdio.h>
int main() {
    int i = 0;
    char *s = "Hello, World!\n";
    while (s[i]) putchar(s[i++]);
    return 0;
}