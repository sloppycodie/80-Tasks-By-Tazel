#include <stdio.h>
int main(){
    int a,n,mul;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter how many multiples: ");
    scanf("%d",&n);
    printf("First %d multiples of %d are:",n,a);
    for (int i = 1; i <= n; i++){
        printf(" %d ", a*i);
    }
    return 0;
}