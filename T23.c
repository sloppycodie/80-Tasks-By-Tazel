#include <stdio.h>
int main(){
    int n, count;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int elem[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elem[i]);
    }
    count = sizeof(elem)/sizeof(elem[0]);//Each integer has a size of 4bytes. So we divided the size of array by the size of each element.
    printf("Number of elements in the set is %d.", count);
}
