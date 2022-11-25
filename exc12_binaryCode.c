#include <stdio.h>

int main(){

    int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, binary;

    printf("\n\nPlease enter max 5 digits number containing only '1' and '0' : ");
    scanf("%d", &n1);

    n2 = (n1/1)%10;
    n3 = (n1/10)%10;
    n4 = (n1/100)%10;
    n5 = (n1/1000)%10;
    n6 = (n1/10000)%10;


    while(1){
        if(n2!=0 && n2!=1){

            printf("Invalid Number\nPlease try again : ");
            scanf("%d", &n1);
        }
        else break;
    }

    while(1){
        if(n3!=0 && n3!=1){

            printf("Invalid Number\nPlease try again : ");
            scanf("%d", &n1);
        }
        else break;
    }

    while(1){
        if(n4!=0 && n4!=1){

            printf("Invalid Number\nPlease try again : ");
            scanf("%d", &n1);
        }
        else break;
    }

    while(1){
        if(n5!=0 && n5!=1){

            printf("Invalid Number\nPlease try again : ");
            scanf("%d", &n1);
        }
        else break;
    }

    while(1){
        if(n6!=0 && n6!=1){

            printf("Invalid Number\nPlease try again : ");
            scanf("%d", &n1);
        }
        else break;
    }


    n2 = n2*1;
    n3 = n3*2;
    n4 = n4*4;
    n5 = n5*8;
    n6 = n6*16;

    binary = n2+n3+n4+n5+n6;

    printf("\n\nThe binary code is : %d", binary);

    return 0;

}