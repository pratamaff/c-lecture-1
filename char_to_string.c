#include <stdio.h>
#include <string.h>

int main() {
    char input[10];

    printf("do you like C? ");
    fgets(input, sizeof(input), stdin);

    if (strcmp(input, "yes\n") == 0 || strcmp(input, "y\n") == 0) {
        printf("nice!\n");
    } else {
        printf("ok\n");
    }

    return 0;
}
