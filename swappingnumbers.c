#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter value of first number: ");
    {
        scanf("%d",&a);
    }
    
    printf("Enter value of second number: ");
    {
        scanf("%d",&b);
    }
    
    {
    temp = a;
    a = b;
    b = temp;
    }

    printf("Swapped numbers are: %d and %d",a,b);
    return 0;
}