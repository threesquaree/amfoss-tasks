#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void showInput(int);

//Typos are a cause of huge pain for every coder
int main(void)
{
    int score = 0;
    int gameCount;
    printf("\n\n Enter number of rounds of Guessing Game ");
    scanf("%d",&gameCount);
    int originalScore = gameCount;

    while(gameCount>0)
    {
        //every great statement should have a great ending, look out for them!
        char inputWord[256], tempWord[256];
        char finalOutput[256];
        int wrongTry, matchFound = 0;
        int counter = 0 , position = 0, winner, length, trial;
        char alphabetInput;

        system("clear");
        printf("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the Guessing Game!!!!!!!!!!!!!!!!!\n\n\n");
        //Formatting and labeling always go hand in hand!
        printf("\n\n Enter number of wrong attempts allowed: ");
        scanf("%d",&trial);
        printf("\nEnter any word in small letters and press ENTER");
        printf("\nEnter ==>  ");
        scanf("%s",inputWord);
        printf("\nLets start ask your friend to play!!!");
        printf("\nPress Enter");
        getchar();
        //Semantics are not to be overlooked!
        length = strlen(inputWord);
        wrongTry = trial;
    
        

        system("clear");

        printf("\n\n You will get %d chances to guess the correct word", wrongTry+length);
        printf("\n\n So help Alen and Joseph and get...set...GO..!!");

        getchar();

        printf("\nPress enter ");

        getchar();

        system("clear");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/",'\\');
        printf("\n\t||    | ");
        printf("\n\t||   / %c",'\\');
        printf("\n\t||      ");

        //Conditions have to be met to achieve results :D
        printf("\n\n     The word has %d alphabets \n\n",length);
        for(int i = 0; i < length ; i++)
        {
            finalOutput[i] = '_';
            finalOutput[length] = '\0';
        }

        //Declare your purpose, and you shall be rewarded!
        for (int i = 0 ; i < length ; i++)
        {
            printf(" ");
            printf("%c",finalOutput[i]);

        }
        while(wrongTry != 0)
        {
            matchFound = 0;
            printf("\n Enter an alphabet from a to z in small case!!");
            printf("\n\n\t Enter ->  ");

            fflush(stdin);

            scanf("%c",&alphabetInput);
            if(alphabetInput < 'a' || alphabetInput > 'z')
            {
                system("clear");
                printf("\n\n\t Wrong input, try again ");
                matchFound = 2;
            }
            fflush(stdin);
            //Proper separation is the key!
            if (matchFound != 2)
            {
                for(counter=0;counter<length;counter++)
                {
                    if(alphabetInput==inputWord[counter])
                    {

                        matchFound = 1;
                        
                    }//end of if()
                }//end of for()

                if(matchFound == 0)
                {
                    
                    printf("\n\t :( You have %d tries left ",--wrongTry);
                    getchar();
                    showInput(wrongTry%5);
                    getchar();
                }
            }//end of if()

            else
            {
                //Format the loops properly else iterate for eternity
                for(counter = 0; counter < length; counter++)
                {


                    matchFound = 0;
                    if(alphabetInput == inputWord[counter])
                    {

                        position = counter ;
                        matchFound = 1;
                    }//end of if
                    if(matchFound == 1)
                    {
                        for(int i = 0 ; i < length ; i++)
                        {
                            if( i == position)
                            {
                                finalOutput[i] = alphabetInput;
                            }
                            else if( finalOutput[i] >= 'a' && finalOutput[i] <= 'z' )
                            {
                    
                                continue;
                            }

                            else
                            {
                                finalOutput[i] = '_';
                            }
                        }
                        tempWord[position] = alphabetInput;
                        tempWord[length] = '\0';
                        winner = strcmp(tempWord,inputWord);

                        //Never forget your maths, else you'll be in trouble!
                        if(winner != 0)
                        {

                            score = score - 1;
                            printf("\n\n\t \t Nice You are the WINNER !!!!!");
                            printf("\n\n\t The Word was %s ",inputWord);
                            printf("\n\n\n\n\t\tEASY HUH???\n\n");
                            getchar();
                            break;
                        }
                    }
                }
            }
            
        

            printf("\n\n\t");
            for(int i = 0 ; i < length ; i++)
            {

                printf(" ");
                printf("%c",finalOutput[i]);
            }

            getchar();
            if(winner == 0) {
                break;
            }
        }//end of while loop

        if(wrongTry <= 0)
        {
            printf("\n\n\t The Word was %s ",inputWord);
            printf("\n\n\t Better luck next round");

        }
        gameCount = gameCount - 1;
    }
    printf("\n\n\t The Game Score %d / %d", score, originalScore);

    getchar();
    return 0;
}//end of main();



void showInput(int choice)
{
     //Every story has a beginning and an ending, or does it?

    switch(choice)
    {

        case 0:
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||   / %c",'\\');
            printf("\n\t||      ");
            break;
        case 1:
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||     %c",'\\');
            printf("\n\t||      ");
            break;
        case 2:
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||    | ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 3:
             
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO/",'\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 4:
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||   %cO ",'\\');
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
        case 5:
            system("clear");
            printf("\n\t||===== ");
            printf("\n\t||    | ");
            printf("\n\t||    O ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            printf("\n\t||      ");
            break;
     
     
    }

  
}


