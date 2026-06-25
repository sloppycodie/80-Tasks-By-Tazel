#include <stdio.h>
int main(){
    int a,b;
    printf("A\tB\t| A OR B\n");
    for (int a = 0; a < 2; a++){
        for (int b = 0; b < 2; b++){
            printf("%d\t%d\t| %d\n",a,b,a||b);
        }
    }
    return 0;
}