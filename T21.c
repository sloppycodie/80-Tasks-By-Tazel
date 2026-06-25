#include <stdio.h>
int main(){
    int a,b;
    printf("A\tB\t| A XOR B\n");
    for (int a = 0; a < 2; a++){
        for (int b = 0; b < 2; b++){
            printf("%d\t%d\t| %d\n",a,b,(a==b)? 0:1);//C already has a XOR operator ^. You can also use a^b instead of (a==b)? 0:1.
        }
    }
    return 0;
}