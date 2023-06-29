#include <stdio.h>

/* Problem Description
If we list all the natural numbers below 
 that are multiples of 3 or 5, we get 3,5,6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 100
*/

int finalNum = 1000;
int sum = 0;

int main(void)
{
    for (int i = 0; i < finalNum; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }
    
    printf("%d is the total\n", sum);
}