#include <stdio.h>
int main(){
    int n;
    int A[] = {2,4,6,8,10};
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++){
        if (n==A[i]){
            printf("%d belongs to the set A.",n);
            return 0; //This ends the main function when the condition is met. So the last line does not get printed.
        }
    }
    printf("%d does not belong to the set A.",n);
}

//Second Approach
/*
#include <stdio.h>

int main() {
    int n;
    int found = 0;
    int A[] = {2, 4, 6, 8, 10};

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++) {
        if (n == A[i]) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d belongs to the set A.", n);
    else
        printf("%d does not belong to the set A.", n);

    return 0;
}*/