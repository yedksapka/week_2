#include <stdio.h>

int main(){

    int amount, term;
    float rate, result;
    char exit = 'Y';

    while ( exit == 'y' || exit == 'Y' ){

        

        printf("\n\nEnter mortgage amount (in dollars) : ");
        scanf("%d", &amount );

        printf("\n\nEnter mortgage term (in years) : ");
        scanf(" %d", &term );

        printf("\n\nEnter interest rate (as a decimal) : ");
        scanf("%f", &rate );

        result = rate * term * amount;

        printf("\n\nThe monthly payable interest : %f", result);

        printf("\n\nDo you want to calculate again? (Y/N) : ");
        getchar();
        scanf("%c", &exit);

    }

    return 0;



}