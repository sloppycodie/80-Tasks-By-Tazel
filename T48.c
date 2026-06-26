#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    (a==b)? printf("The two numbers are equal."):printf("The two numbers are not equal.");
    return 0;
}