
//Assignment 3 : To convert the given inches to centimeters and millimeters

#include <stdio.h>
void main()
{
int inches;
float centimeters, millimeters;
    printf("Enter the number of inches to be converted to centimeters and millileters : ");
    scanf("%d",&inches);
    centimeters=inches*2.54;
    millimeters=inches*25.4;
    printf("the values are %f and %f respectively",centimeters,millimeters);
}
