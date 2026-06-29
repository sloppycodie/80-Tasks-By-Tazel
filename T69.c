#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Value of a :");
    scanf("%d",&a);
    printf("Enter Value of b :");
    scanf("%d",&b);
    if(a>=b){
        printf("%d is greater than or equal %d",a,b);
    }
    else{
        printf("%d is not greater than or equal %d",a,b);
    }
    return 0;
}

