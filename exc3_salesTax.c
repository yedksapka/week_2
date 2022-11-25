#include <stdio.h>
#include <stdlib.h>
void degiş(int x[])
{
    x[0]=10;
}
int main(){

    float amount, cst, sst, ttx;
    char month[50];
    while ( amount != -1 ){

        system("pause");
        system("cls");


        printf("\n\nPlease Enter Total Amount Collected (-1 to quit) : ");
        scanf("%f", &amount );

        getchar();
        printf("\n\nPlease Enter The Month : ");
        scanf(" %s", month );

        cst = (amount*5)/100;
        sst = (amount*4)/100;
        ttx = cst + sst;

        printf("\n\nCollected Total Amount : %.2f", amount);
        printf("\n\nCounty Sales Tax : %.2f", cst);
        printf("\n\nState Sales Tax : %.2f", sst);
        printf("\n\nTotal Sales Tax Collected : %.2f", ttx);

    }


    return 0;

}