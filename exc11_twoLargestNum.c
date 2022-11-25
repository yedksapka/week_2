#include <stdio.h>

int main(){

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, count=0, large, large2;

    printf("\n\nPlease enter each number only once");

    printf("\n\nPlease enter 1st number : ");
    scanf("%d", &num1);

    printf("\n\nPlease enter 2nd number : ");
    scanf("%d", &num2);
    
    if (num1 == num2){
        printf("Please enter another number : ");
        scanf("%d", &num2);
    }

    printf("\n\nPlease enter 3rd number : ");
    scanf("%d", &num3);
    if(num3 == num1 || num3 == num2){
        printf("Please enter another number : ");
        scanf("%d", &num3);
    }

    printf("\n\nPlease enter 4th number : ");
    scanf("%d", &num4);
    if(num4 == num1 || num4 == num2 || num4 == num3){
        printf("Please enter another number : ");
        scanf("%d", &num4);
    }

    printf("\n\nPlease enter 5th number : ");
    scanf("%d", &num5);
    if(num5 == num1 || num5 == num2 || num5 == num3 || num5 == num4){
        printf("Please enter another number : ");
        scanf("%d", &num5);
    }

    printf("\n\nPlease enter 6th number : ");
    scanf("%d", &num6);
    if(num6 == num1 || num6 == num2 || num6 == num3 || num6 == num4 || num6 == num5){
        printf("Please enter another number : ");
        scanf("%d", &num6);
    }

    printf("\n\nPlease enter 7th number : ");
    scanf("%d", &num7);
    if(num7 == num1 || num7 == num2 || num7 == num3 || num7 == num4 || num7 == num5 || num7 == num6){
        printf("Please enter another number : ");
        scanf("%d", &num7);
    }

    printf("\n\nPlease enter 8th number : ");
    scanf("%d", &num8);

    printf("\n\nPlease enter 9th number : ");
    scanf("%d", &num9);

    printf("\n\nPlease enter 10th number : ");
    scanf("%d", &num10);



    
}