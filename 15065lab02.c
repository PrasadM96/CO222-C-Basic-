#include<stdio.h>
#include <ctype.h>
int main(){

    char p1,p2; //declaring player1 and player2

    scanf("%c %c",&p1,&p2);// gets inputs from players


    if((p1!='R') && (p1!='C') && (p1!='P') && (p1!='S') && (p1!='L')){
        printf("Wrong input\n");
    }else if((p2!='R') && (p2!='C') && (p2!='P') && (p2!='S') && (p2!='L')){
        printf("Wrong input\n");
    }else{
        if(p1==p2){
            printf("Tie\n");
        }else if((p1=='R'&&((p2=='C')||(p2=='L'))) || (p1=='C'&&((p2=='P')||(p2=='L'))) || (p1=='P'&&((p2=='R')||(p2=='S')))){
            printf("Player 1 wins\n");
        }else if( (p1=='S'&&((p2=='R')||(p2=='C'))) || (p1=='L'&&((p2=='P')||(p2=='S')))){
            printf("Player 1 wins\n");
        }else if((p1=='R'&&((p2=='P')||(p2=='S'))) || (p1=='C'&&((p2=='R')||(p2=='S'))) || (p1=='P'&&((p2=='C')||(p2=='L')))){
            printf("Player 2 wins\n");
        }else if((p1=='S'&&((p2=='P')||(p2=='L'))) || (p1=='L'&&((p2=='R')||(p2=='C')))){
            printf("Player 2 wins\n");
        }
    return 0;
}
}


