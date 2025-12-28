#include <stdio.h>

int main() {
    int age = 17;

    if (age <= 10) {
        printf("child\n");
    } else if (age < 20) {
        printf("teenager\n");
    } else {
        printf("adult\n");
    }

    return 0;
}
