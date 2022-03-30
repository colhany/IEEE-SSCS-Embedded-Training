#include <stdio.h>
#include <stdlib.h>

#define WELCOME_MESSAGE     "\n###### Welcome to elections/voting 2022 ######\n"
#define MENU    "\n1. Cast the vote\n2. Find vote count\n3. Find leading candidate\n0. Exit\n"

char candidates[5][7] = {"Ahmed", "Omar", "Hassan", "Zaki", "None"};
unsigned int score[] = {0, 0, 0, 0, 0};

void castVote();
void voteCount();
void findLeading();

int main()
{   
    while(1)
    {
        int choice;

        printf(WELCOME_MESSAGE);
        printf(MENU);
        printf("\nPlease enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                castVote();
                continue;
            
            case 2:
                voteCount();
                continue;

            case 3:
                findLeading();
                continue;

            case 0:
                exit(0);

            default:
                printf("Invalid choice!\n");
                continue;
        }

        return 0;
    }
}

void castVote()
{
    int i, choice;

    printf("\n###### Please choose your candidate ######\n\n");
    
    for(i = 1 ; i <= 5 ; i++)
        printf("%d. %s\n", i, candidates[i - 1]);

    printf("\nInput your choice: ");
    scanf("%d", &choice);

    score[choice - 1]++;

    printf("\nThanks for the vote!\n");
}

void voteCount()
{
    int i;

    printf("\n###### Voting statistics ######\n\n");

    for(i = 0 ; i < 5 ; i++)
        printf("%s - %d\n", candidates[i], score[i]);
}

void findLeading()
{   
    unsigned int max = 0;
    int i, maxIndex;
    
    printf("\n###### Leading candidate ######\n\n");

    for(i = 0 ; i < 5 ; i++)
        if(score[i] > max)
        {
            max = score[i];
            maxIndex = i;
        }

    printf("[%s]\n", candidates[maxIndex]);
}