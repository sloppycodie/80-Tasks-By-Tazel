#include <stdio.h>
int main(){
    int n, big;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int elem[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elem[i]);
    }
    for (int i = 1; i < n; i++)
    {
        big = (elem[i-1]>elem[i])? elem[i-1]:elem[i];
    }
    printf("Maximum element is %d.",big);
}