#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int root = cbrt(n);
    if (root * root * root == n){
        printf("%d is a perfect cube.", n);
    }else{
        printf("%d is not a perfect cube.", n);
    }
    return 0;
}