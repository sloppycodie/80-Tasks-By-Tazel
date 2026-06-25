#include <stdio.h>
int main() {
    int n,d;
    printf("Enter two numbers : \t");
    scanf("%d %d", &n, &d);
    if (n%d==0){
        printf("%d is a multiple of %d.",n,d);
    }else{
        printf("%d is not a multiple of %d.",n,d);
    }
    
}