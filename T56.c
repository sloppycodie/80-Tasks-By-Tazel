#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    r = a%b;
    printf("Remainder when %d is divided by %d is %d.",a,b,r);
    return 0;
}
