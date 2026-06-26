#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d are: ",n);
    for (int i = 1; i <=n; i++){
        printf(" %d ",i);
    }
    return 0;
}