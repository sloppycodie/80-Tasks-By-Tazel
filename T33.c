#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube numbers are: ");
    for (int i = 1; i <=n; i++){
        printf(" %d ", (int)pow(i,3));
    }
    return 0;
}