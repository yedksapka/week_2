#include <stdio.h>

int main() {

    int n, i, j;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {

        for (j=1; j<=n; j++){

            printf("\t%d * %d = %d", j, i, j * i);
        }
        printf("\n\n");
    }
  return 0;
}