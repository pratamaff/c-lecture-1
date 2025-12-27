#include <stdio.h>

int main(){
    int i = 0;
    char names[4][20];
    do{
        printf("enter name %d: ",i+1);
        fgets(names[i],sizeof names[i],stdin);

        i++;
    }while(i<4);
    printf("\nyou entered: \n");
    for (int j = 0; j<4;j++){
        printf("%d:%s",j+1,names[j]);
    }
    return 0;
}