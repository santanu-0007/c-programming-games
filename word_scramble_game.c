#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("================================\n");
    printf("      WORD SCRAMBLE GAME\n");
    printf("================================\n");

    // Question 1
    printf("\nScrambled Word: PPALE\n");
    printf("1. APPLE\n");
    printf("2. MANGO\n");
    printf("3. BALL\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score += 10;
    }
    else
        printf("Wrong!\n");


    // Question 2
    printf("\nScrambled Word: RATWE\n");
    printf("1. HOUSE\n");
    printf("2. WATER\n");
    printf("3. TABLE\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score += 10;
    }
    else
        printf("Wrong!\n");


    // Question 3
    printf("\nScrambled Word: OHSOCL\n");
    printf("1. SCHOOL\n");
    printf("2. COLLEGE\n");
    printf("3. OFFICE\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score += 10;
    }
    else
        printf("Wrong!\n");


    // Question 4
    printf("\nScrambled Word: NPE\n");
    printf("1. CAR\n");
    printf("2. PEN\n");
    printf("3. BOX\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score += 10;
    }
    else
        printf("Wrong!\n");


    // Question 5
    printf("\nScrambled Word: KOBO\n");
    printf("1. BOOK\n");
    printf("2. PEN\n");
    printf("3. BAG\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score += 10;
    }
    else
        printf("Wrong!\n");


    printf("\n================================\n");
    printf("Final Score = %d / 50\n", score);
    printf("================================\n");

    return 0;
}
