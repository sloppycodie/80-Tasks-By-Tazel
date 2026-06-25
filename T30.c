#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int root = sqrt(n);
    if (root * root == n){
        printf("%d is a perfect square.", n);
    }else{
        printf("%d is not a perfect square.", n);
    }
    return 0;
}