#include <stdlib.h>
#include <stdio.h>
int main()
{   int rep0,rep1;
    printf("===============================================\n");
    printf("      WELCOME  to Hotel TRANSYLVANIA\n");
    printf("===============================================\n");
    printf("\n");
    printf("      Who are you?\n");
    printf("\n 1-CLIENT         2-ADMIN");
    printf("\n");

    do{
    printf("\nClick on 1 for CLIENT  or 2 for ADMIN:");
    scanf("%d",&rep0);
    }while(rep0<1 || rep0>2);

    printf("\n");

    switch(rep0){
        case 1:{
            do{
            printf("HI dear client, Welcome to our hotel!\n");
            printf("\n");
            printf("===============MENU=================\n");
            printf("\n");
            printf("1-Discover our rooms\n");
            printf("\n");
            printf("2-Book a stay\n");
            printf("\n");
            printf("3-Discover our services\n");
            printf("\n");
            printf("4-Give us your feedback\n");
            printf("\n");
            printf("5-you need help?\n");
            printf("\n");
            printf("Please enter the number corresponding to the desired option:");
            scanf("%d",&rep1);

            if(rep1<1 || rep1>5){
                printf("\n");
                printf("inexisted number please try to entre an available numbre\n\n");} 
            }while(rep1<1 || rep1>5);

            switch(rep1){
                case 1:
                   // discoverroom();
                    break;
                case 2:
                    //reserve();
                    break;
                case 3:
                   // service();
                    break;
                case 4:
                   // feedback();
                    break;
                case 5:
                   // help();
                    break;

                }

                break;}     // and of case 1


            //case user choose admin

        case 2:{
            do{
             printf("HI dear admin, Welcome your hotel!\n");
            printf("\n");
            printf("===============MENU=================\n");
            printf("\n");
            printf("1-rooms informations\n");
            printf("\n");
            printf("2-manage customers and reservation\n");
            printf("\n");
            printf("3-create a promotion\n");
            printf("\n");
            printf("4-employers information\n");
            printf("\n");
            printf("Please enter the number corresponding to the desired option:");
            scanf("%d",&rep1);

           if(rep1<1 || rep1>4){
                printf("\n");
                printf("inexisted number please try to entre an available numbre\n\n");}
            }while(rep1<1 || rep1>4);


             switch(rep1){
                case 1:
                   // roominfo();
                    break;
                case 2:
                    //manage();
                    break;
                case 3:
                   // promotion();
                    break;
                case 4:
                   // employer_info();
                    break;
                }
                break;}

        }     //end of switch that determine user choice





    return 0;
}
