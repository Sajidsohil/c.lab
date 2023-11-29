#include<stdio.h>
void main()
{
    int num,i,c=0;
    printf("input no.");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if (num%i==0){
            c++;
            break;
        }
    }
    if(c==0&&num!=1){printf("%d is a prime\n",num);}
    else printf("%dis not prime\n",num);

}
