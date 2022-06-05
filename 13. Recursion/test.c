#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0, b=1,n,i,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);


    for ( i = 1; i<n-1; i++)
    {   
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}