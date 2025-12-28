#include <stdio.h>
#include <stdlib.h>
void meow(int n);

int main() {
    char n[8];
    int loop;
    printf("how much do you want for loop? :");
    fflush(stdout);
    fgets(n,sizeof(n),stdin);
    loop = atoi(n);
    meow(loop);
}
void meow(int n)
{
    for (int i = 0;i < n;i++){
        printf("meow\n");
    }
}