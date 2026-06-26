#include <stdio.h>
int main() {
    int n,mul=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        mul*=i;
    }
    printf("Product of first %d natural numbers is %d.",n,mul);
}