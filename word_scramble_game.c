#include <stdio.h>
#include <time.h>

int main()
{
    int choice, answer, score, total = 0;
    clock_t start, end;
    double reactionTime;

    printf("\n");
    printf("*************\n");
    printf("*                                     *\n");
    printf("*        WORD SCRAMBLE GAME           *\n");
    printf("*                                     *\n");
    printf("*************\n");

    printf("\n+-------------------------------------+\n");
    printf("|          GAME MENU                  |\n");
    printf("+-------------------------------------+\n");
    printf("|  7  -> Start Game                   |\n");
    printf("|  0  -> Exit Game                    |\n");
    printf("+-------------------------------------+\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 7)
    {
        printf("\n=======================================\n");
        printf("          GAME STARTED!\n");
        printf("=======================================\n");

        /* Question 1 */
        printf("\n---------------------------------------\n");
        printf(" Q1  Scrambled Word: PPALE\n");
        printf("---------------------------------------\n");
        printf(" 1. APPLE\n");
        printf(" 2. MANGO\n");
        printf(" 3. BALL\n");
        printf(" 4. TIGER\n");

        start = clock();

        printf("\nYour Answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 1)
        {
            score = 99;
            printf("\n>> Correct Answer! +99\n");
        }
        else
        {
            score = 0;
            printf("\n>> Wrong Answer!\n");
        }

        printf(">> Reaction Time: %.2f seconds\n", reactionTime);
        total = total + score;


        /* Question 2 */
        printf("\n---------------------------------------\n");
        printf(" Q2  Scrambled Word: RATWE\n");
        printf("---------------------------------------\n");
        printf(" 1. HOUSE\n");
        printf(" 2. WATER\n");
        printf(" 3. TABLE\n");
        printf(" 4. CHAIR\n");

        start = clock();

        printf("\nYour Answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 2)
        {
            score = 99;
            printf("\n>> Correct Answer! +99\n");
        }
        else
        {
            score = 0;
            printf("\n>> Wrong Answer!\n");
        }

        printf(">> Reaction Time: %.2f seconds\n", reactionTime);
        total = total + score;


        /* Question 3 */
        printf("\n---------------------------------------\n");
        printf(" Q3  Scrambled Word: OHSOCL\n");
        printf("---------------------------------------\n");
        printf(" 1. SCHOOL\n");
        printf(" 2. COLLEGE\n");
        printf(" 3. OFFICE\n");
        printf(" 4. MARKET\n");

        start = clock();

        printf("\nYour Answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 1)
        {
            score = 99;
            printf("\n>> Correct Answer! +99\n");
        }
        else
        {
            score = 0;
            printf("\n>> Wrong Answer!\n");
        }

        printf(">> Reaction Time: %.2f seconds\n", reactionTime);
        total = total + score;


        /* Question 4 */
        printf("\n---------------------------------------\n");
        printf(" Q4  Scrambled Word: NPE\n");
        printf("---------------------------------------\n");
        printf(" 1. CAR\n");
        printf(" 2. PEN\n");
        printf(" 3. BOX\n");
        printf(" 4. BAG\n");

        start = clock();

        printf("\nYour Answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 2)
        {
            score = 99;
            printf("\n>> Correct Answer! +99\n");
        }
        else
        {
            score = 0;
            printf("\n>> Wrong Answer!\n");
        }

        printf(">> Reaction Time: %.2f seconds\n", reactionTime);
        total = total + score;


        /* Question 5 */
        printf("\n---------------------------------------\n");
        printf(" Q5  Scrambled Word: KOBO\n");
        printf("---------------------------------------\n");
        printf(" 1. BOOK\n");
        printf(" 2. PEN\n");
        printf(" 3. BAG\n");
        printf(" 4. DESK\n");

        start = clock();

        printf("\nYour Answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 1)
        {
            score = 99;
            printf("\n>> Correct Answer! +99\n");
        }
        else
        {
            score = 0;
            printf("\n>> Wrong Answer!\n");
        }

        printf(">> Reaction Time: %.2f seconds\n", reactionTime);
        total = total + score;


        /* Final Result */
        printf("\n\n***************\n");
        printf("*           GAME COMPLETED            *\n");
        printf("*************\n");

        printf("\n       YOUR FINAL SCORE\n");
        printf("       --------------\n");
        printf("       %d / 495\n", total);

        if(total == 495)
            printf("\n       PERFECT SCORE!\n");
        else if(total >= 297)
            printf("\n       GREAT JOB!\n");
        else
            printf("\n       KEEP PRACTICING!\n");

        printf("\n=======================================\n");
        printf("        THANK YOU FOR PLAYING!\n");
        printf("=======================================\n");
    }

    else if(choice == 0)
    {
        printf("\n=======================================\n");
        printf("       Game Ended. Goodbye!\n");
        printf("=======================================\n");
    }

    else
    {
        printf("\nInvalid Choice! Please run the game again.\n");
    }

    return 0;
