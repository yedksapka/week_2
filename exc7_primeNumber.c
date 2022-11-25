#include <stdio.h>

int main(){

    int num=0, count=2, x, y;
    char exit = 'y';

    while(exit == 'y' || exit == 'Y'){

        printf("\n\nPlease enter a number : ");
        scanf("%d", &num);

        count=2;
        y=0;

        while(1){
            if (num < 0){
                printf("\nInvalid num\nPlease try again : ");
                scanf("%d", &num);
            }

            else if (num == 0){
                y = 99;
                num = 99;
            }

            else if(num == 1){
                y = 99;
                num = 99;
            }

            else break;
        }

        
        while( count < num ){

            x = num % count;

            if (x == 0){

                y++;
            }
            
            count++ ; 
        }


        if(y != 0){

            printf("\n\nThis is not a prime number");
        }

        if(y == 0){

            printf("\n\nThis is a prime number");
        }

        printf("\n\nDo you want to analyze another number? (Y/N) : ");
        getchar();
        scanf("%c", &exit );
    }

    return 0;
}