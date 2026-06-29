#include <stdio.h>
int main(){
    int a,b, d;
    printf("Enter two numbers: ");
    scanf("%d %d",&a , &b);
    d= a-b;
    if (d>=0){
        printf("Distance between %d and %d is %d.",a,b,d);
    }else
    {
        printf("Distance between %d and %d is %d.",a,b,-d);
    }
    return 0;
}