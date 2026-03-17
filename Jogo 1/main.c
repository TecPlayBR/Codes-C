#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //ROCK, PAPER, SCISSOR
    char player1[256];
    char player2[256];

    printf("Player 1, your turn!\n");
    scanf("%s", &player1);

    printf("Player 2, your turn!\n");
    scanf("%s", &player2);

    printf("Wait, check the results....\n");

    if(strcmp(player1, "paper") == 0) {
        if(strcmp(player2, "paper") == 0) {
            printf("Draw!\n");
        } else if(strcmp(player2, "scissor") == 0) {
            printf("Player 2 wins, scissor cuts paper!\n");
        } else if(strcmp(player2, "rock") == 0) {
            printf("Player 1 wins, paper covers rock!\n");
        } else {
            printf("Player 2 didn't play any valid information!\n");
        }
    } else if(strcmp(player1, "scissor") == 0) {
        if(strcmp(player2, "paper") == 0) {
            printf("Player 1 wins, scissor cuts paper!\n");
        } else if(strcmp(player2, "scissor") == 0) {
            printf("Draw!\n");
        } else if(strcmp(player2, "rock") == 0) {
            printf("Player 2 wins, rock breaks scissor!\n");
        } else {
            printf("Player 2 didn't play any valid information!\n");
        }
    } else if(strcmp(player1, "rock") == 0) {
        if(strcmp(player2, "paper") == 0) {
            printf("Player 2 wins, paper covers rock!\n");
        } else if(strcmp(player2, "scissor") == 0) {
            printf("Player 1 wins, rock breaks scissor!\n");
        } else if(strcmp(player2, "rock") == 0) {
            printf("Draw!\n");
        } else {
            printf("Player 2 didn't play any valid information!\n");
        }
    } else {
        printf("Player 1 didn't play any valid information!\n");
    }

    return 0;
}
