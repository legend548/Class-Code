#include<stdio.h>

void towers(int, char, char, char);
int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The Sequence of moves inolved in the Tower of Hanoi are : \n ");
    towers(num,'A','C', 'B');
    return 0;
}
void towers(int num, char frompeg,char topeg,char auxpeg)
{
    if (num == 1)
    {
        printf("\nMove disk 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towers(num - 1,frompeg,auxpeg,topeg);
    printf("\nMove disk %d from peg %c to peg %c",num,frompeg,topeg);
    towers(num-1,auxpeg,topeg,frompeg);
}