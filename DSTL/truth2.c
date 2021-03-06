#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            a[i][j] = !(i && j);
            b[i][j] = !(i || j);
            c[i][j] = (i ^ j);
        }
    }

    printf("\nThe truth table for NAND gate(^) is\n");
    printf("   A    B        A&&B\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("   %d    %d         %d\n", i, j, a[i][j]);
        }
    }
    printf("\nThe truth table for NOR gate( || ) is\n");
    printf("   A    B        A||B\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("   %d    %d         %d\n", i, j, b[i][j]);
        }
    }
    printf("\nThe truth table for XOR gate( && ) is\n");
    printf("   A    B        A^B\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("   %d    %d         %d\n", i, j, c[i][j]);
        }
    }

}