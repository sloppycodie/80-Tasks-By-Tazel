#include <stdio.h>
int main() {
    long long num,inp;
    int count = 0;
    printf("Enter the number:");
    scanf("%lld", &inp);
    num=inp;
    do
    {
        num/=10;
        count++;
    } while (num!=0);
    printf("Number of digits in %lld is %d.", inp, count);
}