#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    (a<b)? printf("%d is less than %d.",a,b): printf("%d is not less than %d.",a,b);
    return 0;
}