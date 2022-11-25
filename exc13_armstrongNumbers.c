#include <stdio.h>
#include <math.h>

int main(){
    
    int n, n1, n2, n3, num;

    printf("Please enter 3 digit number : ");
    scanf("%d", &n);

    while(1){

        if (n<100 || n>1000){
            printf("Invalid number\nPlease try again : ");
            scanf("%d", &n);
        }
        else break;
    }

    n1 = (n/1)%10;
    n2 = (n/10)%10;
    n3 = (n/100)%10;

    num = (pow(n1,3))+(pow(n2,3))+(pow(n3,3));

    printf("Your armstrong number is : %d", num);

    return 0;
}