#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[256];
    int years;

    printf("Hello! What's your name?\n");
    scanf("%s",&name);

    printf("\nHow old are you?\n");
    scanf("%d",&years);

    printf("\nName: %s\nYears_Old: %d\n",name,years);

    printf("\nWait a moment for check your request...");

    printf("The first letter for your name is: $c",name[0]);

    if(years >=18){
        printf("\nYou are adult!");
    }else if(years >=12){
        printf("\nYou are young");
    }else{
        printf("\nYou are kid");
    }

    return 0;

}
