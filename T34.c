#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++){
        sum += (int)pow(i,2);
    }
    printf("Sum of squares from 1 to %d is %d.",n,sum);
    return 0;
}