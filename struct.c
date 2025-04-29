#include <stdio.h>
struct Greeter {
    void (*say)();
};
void greet() {
    printf("Hello, World!\n");
}
int main() {
    struct Greeter g = { greet };
    g.say();
    return 0;
}