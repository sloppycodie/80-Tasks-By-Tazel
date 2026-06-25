#include <stdio.h>
int main(){
    int a;
    printf("A | NOT A\n");
    for (int a = 0; a < 2; a++){
        printf("%d | %d\n",a,!a);
    }
    return 0;
}