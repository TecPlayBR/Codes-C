#include <stdio.h>
#include <stdlib.h>

int main(){

    int hour_shop = 20;
    int hour_current = 20;

    /*//CAN I ENTER THE STORE?
    if(hour_shop == hour_current){
        printf("Posso entrar! O horario e o mesmo");
        }*/

    if(hour_current > hour_shop + 30){
        printf("Store is closed! Not pass!");
    }else if(hour_current < hour_shop - 30){
        printf("Store hasn't opened yet! Come back to late");
    }else{
        printf("Hour is correctly! Enter please!");
        }

    return 0;

}
