#include <stdio.h>
#include <stdlib.h>

int bjp = 0, congress = 0, aap = 0, bsp = 0;

void electionResult()
{
    int wonByVote;
    if (bjp > congress && bjp > aap && bjp > bsp)
    {
        printf("\n**BJP won the election**\n\n");
        printf("Total votes for BJP: %d\n", bjp);
        wonByVote = bjp - congress;
        printf("BJP won by %d votes against Congress\n", wonByVote);
        wonByVote = bjp - aap;
        printf("BJP won by %d votes against AAP\n", wonByVote);
        wonByVote = bjp - bsp;
        printf("BJP won by %d votes against BSP\n", wonByVote);
    }
    else if (congress > aap && congress > bsp)
    {
        printf("\n**Congress won the election**\n\n");
        printf("Total votes for Congress: %d\n", congress);
        wonByVote = congress - bjp;
        printf("Congress won by %d votes against BJP\n", wonByVote);
        wonByVote = congress - aap;
        printf("Congress won by %d votes against AAP\n", wonByVote);
        wonByVote = congress - bsp;
        printf("Congress won by %d votes against BSP\n", wonByVote);
    }
    else if (aap > bsp)
    {
        printf("\n**AAP won the election**\n\n");
        printf("Total votes for AAP: %d\n", aap);
        wonByVote = aap - congress;
        printf("AAP won by %d votes against Congress\n", wonByVote);
        wonByVote = aap - bjp;
        printf("AAP won by %d votes against BJP\n", wonByVote);
        wonByVote = aap - bsp;
        printf("AAP won by %d votes against BSP\n", wonByVote);
    }
    else if (bsp > 0)
    {
        printf("\n**BSP won the election**\n\n");
        printf("Total votes for BSP: %d\n", bsp);
        wonByVote = bsp - congress;
        printf("BSP won by %d votes against Congress\n", wonByVote);
        wonByVote = bsp - aap;
        printf("BSP won by %d votes against AAP\n", wonByVote);
        wonByVote = bsp - bjp;
        printf("BSP won by %d votes against BJP\n", wonByVote);
    }
    else
    {
        printf("\nNo one won the election\n\n");
        printf("            BJP---Congress---AAP---BSP\n");
        printf("Total Vote   %d       %d        %d     %d\n", bjp, congress, aap, bsp);
    }
}

void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        bjp += 1;
        break;
    case 2:
        congress += 1;
        break;
    case 3:
        aap += 1;
        break;
    case 4:
        bsp += 1;
        break;
    }
}

int main()
{
    int choose;
    printf("\n********Welcome to the simple voting system project********\n\n");
    printf("                         MP election                        \n\n");
    printf("*************************************************************\n");
    printf("|           1.BJP             |          2.Congress         |\n");
    printf("*************************************************************\n");
    printf("|           3.AAP             |          4.BSP              |\n");
    printf("*************************************************************\n\n");

    do
    {
        printf("Press 1 to vote for BJP\n");
        printf("Press 2 to vote for Congress\n");
        printf("Press 3 to vote for AAP\n");
        printf("Press 4 to vote for BSP\n");
        printf("Press 5 to show election result\n");
        printf("Please choose: ");
        scanf("%d", &choose);

        if (choose == 5)
        {
            electionResult();
        }
        else
        {
            calculateVote(choose);
        }
        printf("\n");
    } while (choose != 5);

    return 0;
}
