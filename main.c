#include <stdio.h>

int main(void) {
    int n;
    int i;
    printf("inserire un numero");
    scanf("%d", &n);
    for(i=2; n>1; i++) {
        while(n%i==0) {
            printf("%d\n", i);
            n=n/i;
        }
    }
    return 0;
}
