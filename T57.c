#include<stdio.h>
int main()
{
    int a,b,q;
        printf("Enter two numbers: ");
        scanf("%d %d", &a,&b);
        q=a/b;
        printf("Quotient when %d is divided by %d is %d.", a,b,q);
        return 0;
}
