/** ROCK PAPER SCISSOR
by Vikas Patel @ villageprogrammer
Github: vikaspatelp83
Twitter: devdp430
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 3
char obj[] = {'p','s','r'};
int random(char []);
char user_input();
int check_winner(char,char);
void play();


int main(){
    time_t t;
    srand((unsigned)time(&t));


    play();
    return 0;
}

/* For Computer's turn (AUTOMATIC) */
int computer_turn(){
    printf("\nComputer's TURN....\n");
    return (obj[rand()%SIZE]);
}

char player_turn(){
    printf("\nYour turn ({r}ock /{p}aper /{s}cissor)... ");
    return(getch());
}

int check_winner(char computer,char user){
    if(computer==user){
        return 2;
    }
    else if(computer=='p' && user=='r'){
        return 1;
    }
    else if(computer=='r' && user=='p'){
        return 0;
    }
    else if(computer=='p' && user=='s'){
        return 1;
    }
    else if(computer=='s' && user=='p'){
        return 0;
    }
    else if(computer=='r' && user=='s'){
        return 0;
    }
    else if(computer=='s' && user=='r'){
        return 1;
    }
}

void play(){
    char c,p;
    char *winner[3];
    winner[0]="COMPUTER";
    winner[1]="PLAYER";
    winner[2]="NO ONE";
    printf("\n\n************* VIKAS PATEL presents *****************\n");
    printf("=========== ROCK - PAPER - SCISSOR ==========\n");
    do{
        printf("\nEnter {p} to play {e} to exit : \n");
        if(getch()=='p' || getch()== 'P'){
            c = computer_turn();
            p = player_turn();
            int w = check_winner(c,p);
            printf("\n*******************\n%s WON THE GAME\n*******************\n",winner[w] );
        }
        else if(getch()=='e' || getch()== 'E'){
            break;
        }
    }while(1);
    printf("\nBYE BYE");
}
