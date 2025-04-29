#include <stdio.h>
void say_hello() {
    printf("Hello, World!\n");
}
int main() {
    void (*funcs[1])() = { say_hello };
    funcs[0]();
    return 0;
}