#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int limit,num;
    int your_score=0,comp_score=0;
    int c=0;
    printf("\n\n...WELCOME TO GAME...\n \n");
    printf("Enter how many matches you want to play : \n");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        printf("\nEnter 1 for ROCK \nEnter 2 for PAPER \nEnter 3 for SCISSOR \n");
        scanf("%d",&num);

        switch(num){
            case 1:
            printf("\nYou have chooson ROCK..");
            break;

            case 2:
            printf("\nYou have choosen PAPER..");
            break;

            case 3:
            printf("\nYou have choosen SCISSOR..");
            break;

            default:
            printf("\nEnter the correct choice..");
            c=1;
            break;
        }

        int randN = 0;
        randN = (rand()%(3))+1;

        if(c==0){
            if(randN == 1){
                printf("\ncomputer choose the ROCK");
            }
            else if(randN==2){
                printf("\ncomputer choose the PAPER");
            }
            else if(randN==3){
                printf("\ncomputer choose the SCISSOR");
            }
            
            if(randN==num){
                printf("\nGAME is TIE");
            }
            else if(num==1&&randN==3){
                printf("\nYOU WIN");
                your_score++;
            }
            else if(num==2&&randN==3){
                printf("\nYOU LOSE");
                comp_score++;
            }
            else if(num==2 && randN==1){
                printf("\nYOU WIN");
                your_score++;
            }
            else if(num==1 && randN==2){
                printf("\nYOU LOSE");
                comp_score++;
            }
            else if(num==3 && randN==1){
                printf("\nYOU LOSE");
                comp_score++;
            }
            else if(num==3 && randN==2){
                printf("\nYOU WIN");
                your_score++;
            }

        }

    }
    if(limit>=1 &&your_score>comp_score){
        printf("\nyour score is %d \nComputer score is %d\n\n...YOU WIN THIS GAME...\n",your_score,comp_score);
    }
    else if(limit>=1&&your_score<comp_score){
        printf("\nyour score is %d \nComputer score is %d\n\n...YOU LOOSE THIS TIME...\n",your_score,comp_score);
    }
    else{
        printf("\nyour score is %d\ncomputer score is %d\n\n...GAME IS TIE...\n",your_score,comp_score);
    }
}