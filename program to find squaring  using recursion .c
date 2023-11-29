#include<stdio.h>
void main()
{
    int num,square1;
    printf("Enter a number: ");
    scanf("%d",&num);
    square1=square(num);
    printf("Square Sum: %d",square1);
}
int square(int n)
{
    if(n==1)
    return 1;
    else
    return (n*n)+square(n-1);
}
