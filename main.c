#include <stdio.h>
#include <windows.h>

int main(){
    system("cls");
    int r;
    int c;
    char m = 'x';
    int i;
    int j;
    int k;
    char board [3] [3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'},
    };

    for (i = 0; i < 9; i++){
        if(m == 'x'){
            XTURN:printf("x turn\n");
            scanf("%d%d", &r, &c);
            if (board[r][c] != '-'){
                printf("Invalid move");
                Sleep(1000);
                system("cls");
                for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                printf("%c ", board[j][k]);
            }
        printf("\n");
        }
                goto XTURN;
            }
            board[r][c] = 'x';
            m = 'o';
            system("cls");
        } else {
            OTURN:printf("o turn\n");
            scanf("%d%d", &r, &c);
            if (board[r][c] != '-'){
                printf("Invalid move");
                Sleep(1000);
                system("cls");
                for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                printf("%c ", board[j][k]);
            }
        printf("\n");
        }
                goto OTURN;
            }
            board[r][c] = 'o';
            m = 'x';
            system("cls");
        }

        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                printf("%c ", board[j][k]);
            }
        printf("\n");
        }

        if(board [0][0] == 'x' && board [0][1] == 'x' && board [0][2] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [1][0] == 'x' && board [1][1] == 'x' && board [1][2] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [2][0] == 'x' && board [2][1] == 'x' && board [2][2] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [0][0] == 'x' && board [1][0] == 'x' && board [2][0] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [0][1] == 'x' && board [1][1] == 'x' && board [2][1] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [0][2] == 'x' && board [1][2] == 'x' && board [2][2] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [0][0] == 'x' && board [1][1] == 'x' && board [2][2] == 'x'){
                printf("x wins");
                return 0;
            }
        if(board [0][2] == 'x' && board [1][1] == 'x' && board [2][0] == 'x'){
                printf("x wins");
                return 0;
            }

        if( board [0][0] == 'o' && board [0][1] == 'o' && board [0][2] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [1][0] == 'o' && board [1][1] == 'o' && board [1][2] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [2][0] == 'o' && board [2][1] == 'o' && board [2][2] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [0][0] == 'o' && board [1][0] == 'o' && board [2][0] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [0][1] == 'o' && board [1][1] == 'o' && board [2][1] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [0][2] == 'o' && board [1][2] == 'o' && board [2][2] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [0][0] == 'o' && board [1][1] == 'o' && board [2][2] == 'o'){
                printf("o wins");
                return 0;
            }
        if( board [0][2] == 'o' && board [1][1] == 'o' && board [2][0] == 'o'){
                printf("o wins");
                return 0;
            }
    }
printf("it's a draw!");
return 0;
}


//i am unnecessarily proud of this
//i feel like there's a way to use a lot fewer variables though

//actually, I'm coming back to this a few days later and i'm pretty proud of it
//i'm going to try to add the win detection now

//it has win detection now. i'll probably come back and add better detection someday, but today is not that day
//over half of it is just checking to see if someone won lol
//i also need to make it so that you can't just overwrite someone's move, but i can't think of an elegant way to do that without making them forfeit or something
//i learned how to use goto so now it yells at you when you try to cheat
