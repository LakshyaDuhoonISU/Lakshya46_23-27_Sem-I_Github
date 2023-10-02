#include<stdio.h>
int main()
{
   int i,n,fact=1;
   printf("Enter a number to get its factorial: ");
   scanf("%d",&n);
   for (i = n; i>= 1;i--)
   {
    fact=fact*i;
   }
    printf("Its factorial is: %d",fact);
    return 0;
}