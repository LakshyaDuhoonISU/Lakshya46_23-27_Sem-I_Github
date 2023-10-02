#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter value of first number: ");
    scanf("%d",&a);
    printf("Enter value of second number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum of %d and %d is %d",a,b,sum);
    return 0;
}