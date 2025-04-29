#include <stdio.h>
void hello(int n) {
    if (n == 0) return;
    hello(n - 1);
    if (n == 1) printf("Hello, World!\n");
}
int main() {
    hello(1);
}