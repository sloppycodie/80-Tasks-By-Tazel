#include <stdio.h>
int main() {
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        if (i%3==0){
            count++;
        }
    }
    printf("There are %d numbers divisible by 3 from 1 to %d.",count,n);
    return 0;
}