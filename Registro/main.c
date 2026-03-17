#include <stdio.h>
#include <stdlib.h>

int main(){

    char name[256];
    //TEST YOUR MIND! USE THE VARIABLES THAT WERE NOT USED
    char nickname[256];//use this
    int year_birth;

    int height;

    printf("What's your name?\n");
    scanf("%s",name);

    printf("\nCool, %s... How old are you?\n",name);
    scanf("%d",&year_birth);

    printf("\nNice! Mr. %s have %d years old\n",name,year_birth);

    printf("\nMr. %s tell me your nickname please!\n", name);
    scanf("%s", nickname);

    printf("\nNice to meet you Mr. %s %s \n",name,nickname);

    printf("\nMr. %s what's your height?\n",name);
    scanf("%d",&height);

    printf("\nThanks Mr. %s so, you have %d\n",name,height);

    return 0;

}
