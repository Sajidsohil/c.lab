#include<stdio.h>
void main()
{
    int sum ,n , a,b,sub,mul;
    printf("enter the no.\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1: 
    printf("enter  the number");
    scanf("%d%d",&a,&b); 
     sum=a+b;
     printf("%d",sum);
     break;
    case 2:   printf("enter  the number");
    scanf("%d%d",&a,&b); 
     sub=a-b;
     printf("%d",sub);
    break;
    case 3:   printf("enter  the number");
    scanf("%d%d",&a,&b); 
     mul=a*b;
     printf("%d",mul);
     break;
    }
}
