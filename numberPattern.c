#include <stdio.h>
int main(){

    int n=1, n2=1;

    while(n<=10){
        
        n2=1;
        while(n2<=n){

            printf("*");
            n2++;
        }
        printf("\n");
        n++;
    }

    return 0;
}