#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from %d to 1 are: ",n);
    for (int i = n; i>0; i--){
        printf(" %d ",i);
    }
    return 0;
}