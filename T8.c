#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d even numbers are: ", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i * 2);
    }
    return 0;
}