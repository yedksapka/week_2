#include <stdio.h>

int main(){

    int result; 
    int counter=0, counter2=0, counter3=0;

    while ( counter < 10 ){

        result = 0;

        printf("\n\nPlease enter result : ");
        scanf("%d", &result );

        counter++;

        switch(result){


            case 1:
            printf("PASSED!");
            counter2++;
            break;

            case 2:
            printf("FAILED!");
            counter3++;
            break;

            default:
            printf("Please enter valid result");
            counter--;
            break;
        }

    }


    if( counter2 > 8){

        printf("\nBonus to instructor");
    }

    printf("\nNumber of passed student is %d", counter2);
    printf("\nNumber of failed student is %d", counter3);

    return 0;
}