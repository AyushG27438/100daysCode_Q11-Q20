//Ques2.Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the 1st no.:");
    scanf("%d", &a);
    printf("Enter the 2nd no.:");
    scanf("%d", &b);
    printf("Enter the 3rd no.:");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("largest no. is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("largest no. is %d\n", b);
    }
    else
    {
        printf("largest no. is %d\n", c);
    }

    return 0;
}