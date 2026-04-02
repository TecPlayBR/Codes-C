#include <stdio.h>
#include <stdlib.h>

int main(){

    int count = 1; //START WITH NUMBER 1 AT 10
  //int contador = 0; START WITH NUMBER 0 AT 9
    int limit = 10;
  /* HERE COUNT THE NUMBER ONE AT THE NUMBER TEN IN SEQUENCE ASCENT
    while(count <= limit){
        printf("Hello!\n");
        printf("%d",count);
        printf("----\n");
        count++;
    }
    */

    while(count <= limit){
        printf("This is a first loop\n");
        if(count == 3)
        {
            int count_2 = 5;
            while(count_2 > 0){
                printf("This is a second loop\n");
                count_2--;
            }
        }

        count++;
    }

    return 0;

}
