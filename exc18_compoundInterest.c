#include <stdio.h>
#include <math.h>

int main(){

    float p, r, a;
    int n;


    p=1000.00;
    r=.05;
    

    for( n=1; n<=10; n++){

        a = pow(1+r, n) * p;

        printf("\n\n%.2f is the amount of deposit at the end og %d.year", a, n);

    }

    return 0;
}