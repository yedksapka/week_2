#include <stdio.h>

int main(){

    char exit[] = 'Y';
    int gate;
    int num, n1, n2, n3, n4, temp1, temp2;


    while(exit == 'y' || exit=='Y' || exit=="Yes" || exit=="YES" || exit=="yes"){



        printf("\n\n");
        printf(" ---------------------- \n");
        printf("|   1 -> Encryption    |\n");
        printf("|                      |\n");
        printf("|   2 -> Decryption    |\n");
        printf(" ---------------------- \n");
        printf("\n\n");
        printf("Your choise : ");
        scanf("%d", &gate);

        

        while(1){

            if( gate!=1 && gate!=2 ){
                printf("\n\nInvalid entry\nPlease try again : ");
                scanf("%d", &gate);
            }
            else break;
        }




        switch(gate){





            case 1 :
            printf("\n\nPlesase enter the number you want to encrypt (4 digit) : ");
            scanf("%d", &num);

            while(1){
                if( num<1000 || num >9999 ){
                    printf("\n\nInvalid data\nPlesase enter the number you want to encrypt (4 digit) : ");
                    scanf("%d", &num);
                }
                else break;
            }

            n4= (num/1)%10;
            n3= (num/10)%10;
            n2= (num/100)%10;
            n1= (num/1000)%10;

            n4 = n4+7;
            n3 = n3+7;
            n2 = n2+7;
            n1 = n1+7;

            n4 = n4%10;
            n3 = n3%10;
            n2 = n2%10;
            n1 = n1%10;

            temp1=n1;
            n1=n3;
            n3=temp1;

            temp2=n2;
            n2=n4;
            n4=temp2;

            printf("\nInteger encrypted succesfully!\n");
            printf("\nResult is : %d %d %d %d", n1, n2, n3, n4);


            printf("\n\nDo you want to go to menu (Y/N) : ");
            getchar();
            scanf("%s", &exit);

            break;


            




            case 2 :

            printf("\n\nPlesase enter the number you want to decrypt (4 digit) : ");
            scanf("%d", &num);

            while(1){
                if( num<1000 || num>9999){
                    printf("\n\nInvalid data\nPlesase enter the number you want to decrypt (4 digit) : ");
                    scanf("%d", &num);
                }
                else break;
            }

            n4= (num/1)%10;
            n3= (num/10)%10;
            n2= (num/100)%10;
            n1= (num/1000)%10;

            temp1=n1;
            n1=n3;
            n3=temp1;

            temp2=n2;
            n2=n4;
            n4=temp2;


            n1= (n1+3)%10;
            n2= (n2+3)%10;
            n3= (n3+3)%10;
            n4= (n4+3)%10;

            printf("\nInteger decrypted succesfully!\n");
            printf("\nResult is : %d %d %d %d", n1, n2, n3, n4);


            printf("\n\nDo you want to go to menu (Y/N) : ");
            getchar();
            scanf("%s", &exit);

            break;

        }
    }


    return 0;
}