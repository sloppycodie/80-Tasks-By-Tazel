#include <stdio.h>
int main() {
    int n,a,b;
    printf("Enter Lower limit:");
    scanf("%d", &a);
    printf("Enter upper limit:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &n);
    if (a<n && n<b){
        printf("%d is between %d and %d.",n,a,b);
    }
    else{
        printf("%d is not between %d and %d.",n,a,b);
    }
    return 0;
}