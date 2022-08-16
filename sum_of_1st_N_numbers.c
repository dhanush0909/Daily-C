#include <stdio.h>
int main()
{
    int sum = 0, i = 0, n;
    printf("Enter the value of 'N' : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }

    printf("The sum is : %d", sum);
}
