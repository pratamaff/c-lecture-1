#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    char a_convert_to_int[8];
    int a;

    printf("how much you want to enter a name?\n");
    fgets(a_convert_to_int,sizeof a_convert_to_int,stdin);
    a = atoi(a_convert_to_int);
    char names[a][20];
    do{
        printf("enter name %d: ",i+1);
        fgets(names[i],sizeof names[i],stdin);

        i++;
    }while(i<a);
    printf("\nyou entered: \n");
    for (int j = 0; j<a;j++){
        printf("%d:%s",j+1,names[j]);
    }
    return 0;
}