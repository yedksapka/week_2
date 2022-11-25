#include <stdio.h>

int main(){

    unsigned int x = 0, y = 0, i = 1, power = 1;

    printf("\nPlease enter unsigned x : ");
    scanf("%u", &x );

    printf("\nPlease enter unsigned y : ");
    scanf("%u", &y );

    while ( i <= y ){

        power = power * x;
        i++ ;

    }

    printf("\n\n%u\n\n", power);
    
    return 0;

}