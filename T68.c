#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    if(a<=b){
        printf("%d is less than or equal %d",a,b);
    }
    else{
        printf("%d is not less than or equal %d",a,b);
    }
    return 0;
}
