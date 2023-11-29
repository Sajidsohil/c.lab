#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n],sume=0,sumo=0;
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {sume=sume+a[i];}
        else
        {sumo=sumo+a[i];}
    }
    printf("Sum of even: %d",sume);
    printf("\nSum of odd: %d",sumo);
}
