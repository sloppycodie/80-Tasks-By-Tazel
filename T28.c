#include <stdio.h>
int main(){
    int n, count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int elem[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++){
        scanf("%d", &elem[i]);
        if (elem[i]%2!=0){
            count++;
        }
    }
    printf("Number of odd elements is %d.",count);
}