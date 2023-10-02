#include<stdio.h>
int main()
{
    int p,t;float si,c,r=9.5;
    printf("Enter principal amount: ");
    scanf("%d",&p);
    printf("Enter amount of time(in years): ");
    scanf("%d",&t);
    si=p*r*t/100;
    c=si+p;
    printf("Simple Interest is: %f",si);
    printf("Cummulative amount is: %f",c);
    return 0;
}