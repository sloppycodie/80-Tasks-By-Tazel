#include<stdio.h>
int main(){
    int a,b,prod;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    prod = a*b;
    printf("Product is %d\n",prod);
    if(prod%2==0){
        printf("%d is an even number",prod);
    }
    else{
        printf("%d is an odd number",prod);
    }
    return 0;
}
