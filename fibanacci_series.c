// To write a program to print fibanacci series upto the desired number
#include <stdio.h>
void main()
{

int n1=0, n2=1, n3,n, i;
printf("Enter the number : \n");
scanf("%d",&n);
if(n=0)
{
    printf("Enter a number more than '0'");
}
else if(n=1)
    {
    printf(" %d ",n1);
    }
else if(n=2)
    {
    printf("%d %d", n1,n2);
    }
else
{
printf("%d %d",n1, n2);
for(i=0; i<n-2; i++)
{
    n3=n1+n2;
    printf(" %d ",n3);
    n1=n2;
    n2=n3;
}

}
}
