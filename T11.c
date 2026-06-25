#include <stdio.h>
int main(){
    int n,rev=0,sign = 1, lastDigit;
    printf("Enter a number : \t");
    scanf("%d",&n);
    int input = n;
    if(n<0){
        sign = -1;
        n = -n;
    }
    while (n!=0){
        lastDigit = n%10;
        rev = rev*10+lastDigit;
        n = n/10;
    }
    rev*=sign;
    if (rev==input){
        printf("%d is a palindrome number.",input);
    }else{
        printf("%d is not a palindrome number.",input);
    }
    
}