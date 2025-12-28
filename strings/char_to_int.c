#include <stdio.h>
#include <stdlib.h>

int main() {
    char age_input[4];
    int age;

    printf("enter your age: ");
    fgets(age_input, sizeof(age_input), stdin);
    age = atoi(age_input);

    printf("age = %d\n", age);
    return 0;
}
