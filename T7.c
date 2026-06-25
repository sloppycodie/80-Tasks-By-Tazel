#include <stdio.h>
int main() {
    int n, fact=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d.", n,fact);
}
//When the value of n is 0. the for loop wont work and this program will directly print 1.
