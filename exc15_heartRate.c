#include <stdio.h>

int main(){

    int y1, y2, age, max, r1, r2;
    

    printf("Date (this year) : ");
    scanf("%d", &y1);

    printf("Date (Your birthday year) : ");
    scanf("%d", &y2);

    age = y1 - y2;

    while(1){

        if(age<=0){

            printf("Invalid dates\nPlease try again");
            printf("Date (this year) : ");
            scanf("%d", &y1);

            printf("Date (Your birthday year) : ");
            scanf("%d", &y2);

        }
        else break;
    }

    max = 200-age;

    r1 = max/2;
    r2 = (max*17)/20;

    printf("\n\nYour maximum heart rate in beats per minute is : %d", max);

    printf("\n\nYour target heart rate is a range is : %d - %d", r1, r2);

    return 0;
    
}