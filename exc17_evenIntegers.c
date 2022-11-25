#include <stdio.h>

int main(){

    int i, sum=0, mod;

    for(i=1; i<=100; i++){

        mod = i%2;

        if(mod==0){

            sum = sum+i;
        }
        
    }

    printf("%d", sum);

    return 0;

}