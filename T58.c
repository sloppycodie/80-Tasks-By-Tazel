#include <stdio.h>
int main(){
    int a,b,n=5;
    printf("Enter two numbers: ");
    scanf("%d %d",&a , &b);
    if (a%n==b%n)
    {
        printf("%d and %d have the same remainder modulo 5.",a,b);
    }else{
        printf("%d and %d not have the same remainder modulo 5.",a,b);
    }
    return 0;
}