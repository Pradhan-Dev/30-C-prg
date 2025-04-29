int main() {
    _asm_(
        "movl $13, %%edx;"
        "movl $msg, %%ecx;"
        "movl $1, %%ebx;"
        "movl $4, %%eax;"
        "int $0x80;"
        :
        : "m" ("msg")
    );
    return 0;
}
const char msg[] = "Hello, World!\n";