#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int elem[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++){
        scanf("%d", &elem[i]);
    }
    for (int i = 0; i < n; i++){
        sum+=elem[i];
    }
    printf("Sum of elements is %d.",sum);
}