#include <stdio.h>
int main()
{
    int a[100], i, n, sum = 0;
    printf("Enter number of digits of the number");
    scanf("%d", &n);
    printf("enter the number");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("the sum of the digitis is : %d", sum);
    return 0;
}