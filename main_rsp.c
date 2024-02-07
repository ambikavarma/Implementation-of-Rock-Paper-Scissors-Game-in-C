#include <stdio.h>
#include <conio.h>
#include <time.h>

int compare(char, char);
int numberRandomizer(int);


int numberRandomizer(int n)
{
    srand(time(NULL));
    return rand()%n;
}
 

int compare(char ch1, char ch2)
{
    if(ch1==ch2)
    {
        return -1;
    }
    
    else if(ch1=='r'&&ch2=='s')
    {
        return 1;
    }
    else if(ch1=='s'&&ch2=='r')
    {
        return 0;
    }
    
    else if(ch1=='p'&&ch2=='r')
    {
        return 1;
    }
    else if(ch1=='r'&&ch2=='p')
    {
        return 0;
    }
    
    else if(ch1=='s'&&ch2=='p')
    {
        return 1;
    }
    else if(ch1=='p'&&ch2=='s')
    {
        return 0;
    }
}

int main()
{
    int playerscore=0, compscore=0, temp;
    char playerCh,compCh;
    char arr[]={'r','p','s'};
    printf("\t\t\t===========---->*Welcome to Rock, Paper & Scissor Game*<---===========\n\n");
    for(int i=0;i<3;i++)
    {
         printf("Your Choice\t\t\tYour Turn :\n");
         printf("\t\t\tPlease select the option: \n");
         printf("\t\t\t1.Rock\n");
         printf("\t\t\t2.Paper\n");
         printf("\t\t\t3.Scissors\n");
         scanf("%d",&temp);
         playerCh=arr[temp-1];
         printf("\t\t\tYou took %c\n\n",playerCh);
    
         printf("Computer's Choice\t\tComputer's Turn :\n");
         printf("\t\t\tPlease select the option: \n");
         printf("\t\t\t1.Rock\n");
         printf("\t\t\t2.Paper\n");
         printf("\t\t\t3.Scissors\n\n");
         temp=numberRandomizer(3)+1;
         compCh=arr[temp-1];
         printf("%d\t\t\tComputer took %c\n\n",temp,compCh);
         
         if(compare(compCh,playerCh)==1)
         {
            printf("\n\n");
            printf("\t\t\t --------------------\n");
			printf("\t\t\t|    Computer Won     |\n");
			printf("\n\n");
            compscore++;
         }
         else if(compare(compCh,playerCh)==-1)
         {
            printf("\n\n");
            printf("\t\t\t --------------------\n");
			printf("\t\t\t|     It's a Draw   |\n");
             
            printf("\n\n");
         }
         else
         {
             printf("\n\n");
             printf("\t\t\t --------------------\n");
			 printf("\t\t\t|      You Won     |\n");
             playerscore++;
             printf("\n\n");
         }
    }
    
    if(playerscore>compscore)
    {
        printf("\t\t\t* * * *# # You Win the Game # #* * * *\n");
    }
    else if(playerscore<compscore)
    {
        printf("\t\t\t* * * *# # Computer Wins the Game # #* * * *\n");
        
    }
    else
    {
        printf("\t\t\t* * * *# # It's a Tie # #* * * * \n");
    }
}

        
    
    
   
    
    
    




