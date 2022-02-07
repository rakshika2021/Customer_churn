#include<stdio.h>
char poss[10]={'0','1','2','3','4','5','6','7','8','9'};
void creating_board();
void marking_board(int,char);
int check_for_win();
int main()
{
    int choice;
    int player=1,i;
    char mark;
do{
    creating_board();
    player=(player%2)?1:2;
        
    printf("Player %d ,please enter a number: ",player);
    scanf("%d",&choice);

    mark=(player==1)?'X':'O';
    marking_board(choice,mark);

    i=check_for_win();
    player++;
    
    
}while(i==-1);
creating_board();
if(i==1)
     printf("Player %d you have won the game",--player);
else
     printf("<-------------Draw------------->");

return 0;
}
void creating_board()
{
    printf("\n\n\t TIC TAC TOE\n\n");
    printf("\n\nPLAYER 1[X] || PLAYER 2[O]\n\n");
    //printing the board
    printf("    |       |     \n");
    printf(" %c  |   %c  |  %c \n",poss[1],poss[2],poss[3]);
    printf("-------------------\n");
    printf("    |       |     \n");
    printf(" %c  |   %c  |  %c \n",poss[4],poss[5],poss[6]);
    printf("    |       |     \n");
    printf("-------------------\n");
    printf(" %c  |   %c  |  %c \n",poss[7],poss[8],poss[9]);
    printf("    |       |     \n");
}
void marking_board(int choice,char mark)
{
 if (choice==1 && poss[1]=='1')
    poss[1]=mark;
else if(choice==2 && poss[2]=='2')
    poss[2]=mark;
else if(choice==3 && poss[3]=='3')
    poss[3]=mark;
else if(choice==4 && poss[4]=='4')
    poss[4]=mark;
else if(choice==5 && poss[5]=='5')
    poss[5]=mark;
else if(choice==6 && poss[6]=='6')
    poss[6]=mark;
else if(choice==7 && poss[7]=='7')
    poss[7]=mark;
else if(choice==8 && poss[8]=='8')
    poss[8]=mark;
else if(choice==9 && poss[9]=='9')
    poss[9]=mark;
else 
printf("Invalid move: Please choose a valid input");
}
int check_for_win()
{
 if(poss[1]==poss[2] && poss[2]==poss[3])
    return 1;
else if(poss[4]==poss[5] && poss[5]==poss[6])
    return 1;
else if(poss[7]==poss[8] && poss[8]==poss[9])
    return 1;
    
else if(poss[1]==poss[4] && poss[4]==poss[7])
    return 1;
else if(poss[2]==poss[5] && poss[5]==poss[8])
    return 1;
else if(poss[3]==poss[6] && poss[6]==poss[9])
    return 1;
    
else if(poss[1]==poss[5] && poss[5]==poss[9])
    return 1;
else if(poss[3]==poss[5] && poss[5]==poss[7])
    return 1;
    
else if(poss[1]!='1' && poss[2]!='2' && poss[3]!='3' && poss[4]!='4' && poss[5]!='5' && poss[6]!='6' && poss[7]!='7' && poss[8]!='8' && poss[9]!='9')
    return 0;
else
    return -1;
}