#include<stdio.h>
int main(){
    int x, sol;
    printf("Enter value of x:");
    scanf("%d",&x);
    sol = (2*x)+1;
    printf("f(%d) = %d\n",x,sol);
    (sol%2==0)? printf("%d is an even number.",sol):printf("%d is an odd number.",sol);
    return 0;
}