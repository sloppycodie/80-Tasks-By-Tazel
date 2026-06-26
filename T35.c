#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++){
        sum += (int)pow(i,3);
    }
    printf("Sum of cubes from 1 to %d is %d.",n,sum);
    return 0;
}