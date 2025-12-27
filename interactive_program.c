#include <stdio.h>  
#include <stdlib.h>
#include <string.h>

int main() {        
    char input[100];
    char age_input[4];
    int age;
    char opinion[10];

    printf("hey whats your name? ");
    fgets(input, sizeof(input), stdin);
    printf("hello,%s",input);
    printf("now i want know whats your age: ");
    fgets(age_input, sizeof(age_input),stdin);
    age = atoi(age_input);


    if (age <= 10)
    {
        printf("wow your age is 10 or under?its a child\n");
    }
    else if (age >= 10 && age <20)
    {
        printf("wow your age is above 10?its a teenager\n");
    }
    else{
        printf("wow your age is 20 or above 20\n");
    }
    printf("hey this code is cool,right? ");
    fgets(opinion, sizeof(opinion), stdin);
    
    if (strcmp(opinion, "y") == 0 ||
    strcmp(opinion, "Y") == 0 ||
    strcmp(opinion, "yes") == 0 ||
    strcmp(opinion, "YES") == 0)
    {
        printf("yeah bro thanks\n");
    }
    else
    {
        printf("yeah bro i will make it better\n");
    }
    
    
    return 0;
}