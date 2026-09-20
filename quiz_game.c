#include <stdio.h>
#include <time.h>

int main()
{
    int choice, answer, score, total = 0;
    clock_t start, end;
    double reactionTime;

    printf("================================\n");
    printf("          QUIZ GAME\n");
    printf("================================\n");

    printf("\nPress 7 to start the game\n");
    printf("Press 0 to quit the game\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 7)
    {
        printf("\nGame Started!\n");

        /* Question 1 */
        printf("\nQ1. Which language is used for C programming?\n");
        printf("1. Python\n");
        printf("2. C\n");
        printf("3. HTML\n");
        printf("4. Java\n");

        start = clock();

        printf("Enter your answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 2)
        {
            score = 99;
            printf("Correct!\n");
        }
        else
        {
            score = 0;
            printf("Wrong Answer!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Score = %d\n", score);
        total = total + score;


        /* Question 2 */
        printf("\nQ2. Which function is used to print output in C?\n");
        printf("1. scanf()\n");
        printf("2. printf()\n");
        printf("3. input()\n");
        printf("4. print()\n");

        start = clock();

        printf("Enter your answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 2)
        {
            score = 99;
            printf("Correct!\n");
        }
        else
        {
            score = 0;
            printf("Wrong Answer!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Score = %d\n", score);
        total = total + score;


        /* Question 3 */
        printf("\nQ3. Which data type stores an integer?\n");
        printf("1. float\n");
        printf("2. char\n");
        printf("3. int\n");
        printf("4. double\n");

        start = clock();

        printf("Enter your answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 3)
        {
            score = 99;
            printf("Correct!\n");
        }
        else
        {
            score = 0;
            printf("Wrong Answer!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Score = %d\n", score);
        total = total + score;


        /* Question 4 */
        printf("\nQ4. Which symbol ends a C statement?\n");
        printf("1. :\n");
        printf("2. ;\n");
        printf("3. .\n");
        printf("4. ,\n");

        start = clock();

        printf("Enter your answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 2)
        {
            score = 99;
            printf("Correct!\n");
        }
        else
        {
            score = 0;
            printf("Wrong Answer!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Score = %d\n", score);
        total = total + score;


        /* Question 5 */
        printf("\nQ5. Which loop is used for repetition in C?\n");
        printf("1. for\n");
        printf("2. if\n");
        printf("3. switch\n");
        printf("4. break\n");

        start = clock();

        printf("Enter your answer: ");
        scanf("%d", &answer);

        end = clock();

        reactionTime = (double)(end - start) / CLOCKS_PER_SEC;

        if(answer == 1)
        {
            score = 99;
            printf("Correct!\n");
        }
        else
        {
            score = 0;
            printf("Wrong Answer!\n");
        }

        printf("Reaction Time = %.2f seconds\n", reactionTime);
        printf("Score = %d\n", score);
        total = total + score;


        /* Final Result */
        printf("\n================================\n");
        printf("         QUIZ COMPLETED\n");
        printf("================================\n");

        printf("Total Score = %d / 495\n", total);
    }

    else if(choice == 0)
    {
        printf("\nGame Ended.\n");
    }

    else
    {
        printf("\nInvalid Choice!\n");
    }

    return 0;
}
