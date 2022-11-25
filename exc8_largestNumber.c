#include <stdio.h>

int main(){

    int counter=1, num, largest=0;

    while(counter < 11){

        printf("\n\nPlease enter %d. number : ", counter);
        scanf("%d", &num);

        while(1){
            if(num<0){
                printf("\n\nInvalid number\nPlease enter again : ");
                scanf("%d", &num);
            }
            else break;
        }

        counter++;

        if(num > largest){

            largest = num;
        }
    }

    printf("\n\nThe largest number is : %d", largest);

    return 0;
}
