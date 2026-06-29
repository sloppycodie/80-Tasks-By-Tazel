#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (10<=n && n<=50){
        printf("%d is within the range 10 to 50.",n);
    }
    else{
        printf("%d is outside the range 10 to 50.",n);
    }
    return 0;
}