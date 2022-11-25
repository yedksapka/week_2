#include <stdio.h>

int main(){
    int count=0, mod;

    while(count < 500 ){
        count++;

        mod = count%50;

        if(mod!=0){
            printf(" $");

        }
        else if(mod==0){
            printf("\n");
            
        }
    }

    return 0;
}