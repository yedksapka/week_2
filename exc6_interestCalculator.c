

#include <stdio.h>
#include <stdlib.h>

int main(){

    float interest, principal, rate, days;

    while ( interest != -1 ){

        printf("\n\nEnter loan principal (-1 to end) : ");
        scanf("%f", &principal );
        while (1){
            if (principal < 0){

                printf("\n\nEnter loan principal (-1 to end) : ");
                scanf("%f", &principal );

            }
            else break;

        }


        printf("\n\nEnter interest rate : ");
        scanf("%f", &rate );
        while (1){
            if (rate < 0){

                printf("\n\nEnter interest rate : ");
                scanf("%f", &rate );

            }
            else break;

        }

        printf("\n\nEnter term of the loan in days : ");
        scanf("%f", &days);
        while (1){
            if(days <= 0){

                printf("\n\nEnter term of the loan in days : ");
                scanf("%f", &days);

            }
            else break;

        }


        interest = principal * rate * days / 365;

        printf("\n\nThe interest charge is : %.2f", interest);

    }

    return 0;
}