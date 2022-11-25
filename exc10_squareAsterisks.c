#include <stdio.h>

int main(){

    int size=0, i=0, j=0;

    printf("Please enter size of square : ");
    scanf("%d", &size);

    while(1){
        if(size < 1  || size > 20){

            printf("Invalid value\nPlease enter again : ");
            scanf("%d", &size);

        }
        else break;
    }

    while( size>i ){

        j=0;
        while( size>j ){
            printf("*");
            j++;
        }

        printf("\n");
        i++;
        

    }

    return 0;

}