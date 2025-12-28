#include <stdio.h>

int main() {
    char name[100];

    printf("hey whats your name? ");
    fgets(name, sizeof(name), stdin);

    printf("hello, %s", name);
    return 0;
}
