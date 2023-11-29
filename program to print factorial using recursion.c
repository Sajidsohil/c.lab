#include<stdio.h>
void main()
{
    int num,fact1;
    printf("Enter two numbers: ");
    scanf("%d",&num);
    fact1=fact(num);
    printf("Factorial: %d",fact1);
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
