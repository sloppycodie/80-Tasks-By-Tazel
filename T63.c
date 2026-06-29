#include<stdio.h>
int main()
{
    int x,y,f;
    printf("Enter Value of x: ");
    scanf("%d",&x);
    printf("Enter Value of y: ");
    scanf("%d",&y);
    f = x + y;
    printf("f(%d,%d) = %d",x,y,f);
    return 0;
}
