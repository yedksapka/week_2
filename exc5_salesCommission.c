#include <stdio.h>

int main(){

    float sale, salary;

    while( sale != -1 ){

        printf("\n\nEnter sales in dollars (-1 to end) : ");
        scanf("%f", &sale);

        salary = 200 + ((sale*9)/100);

        printf("Salary is : %.2f", salary);

    }

    return 0;
    
}