#include "main.h"


int main() {
    int r;
    FILE *room;
    FILE *client;
    FILE *reservation;
    room = fopen("room.txt","a+");
    client = fopen("client.txt","a+");
    reservation = fopen("reservation.txt","a+");


employer e;
    int rep0, rep1;
    clearScreen();
    user_menu:
    printf("===============================================\n");
    printf("      WELCOME to Hotel TRANSYLVANIA\n");
    printf("===============================================\n");
    printf("\n");
    printf("      Who are you?\n");
    printf("\n 1- CLIENT         2- ADMIN\n");

    do {
        printf("\nClick on 1 for CLIENT or 2 for ADMIN:");
        scanf("%d", &rep0);
    } while (rep0 < 1 || rep0 > 2);

    printf("\n");

    switch(rep0) {
        case 1: {
                clearScreen();
                menu:
                printf("HI dear client, Welcome to our hotel!\n");
                printf("===============MENU=================\n");
                printf("1- Discover our rooms\n");
                printf("2- Book a stay\n");
                printf("3- Discover our services\n");
                printf("4- Give us your feedback\n");
                printf("5- GO back");
                do{
                printf("\nPlease enter the number corresponding to the desired option in the menu:");
                scanf("%d",&rep1);
                }while(rep1<1 || rep1>5);
                switch(rep1){

                case 1:{
                    clearScreen();
                   //discoverroom();
                   printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   clearScreen();
                   goto menu;
                    break;}
                
                
                case 2:{
                     clearScreen();
                     printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto menu;
                    //reserve()
                    break;}
                case 3:{
                   clearScreen();
                     printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto menu;
                   //discover();
                    break;}

                case 4:{
                    clearScreen();
                    printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto menu;
                   //feedback(&f);
                    break;}
                case 5:{
                    clearScreen();
                    goto user_menu;
                    break;}
                }
                }
        case 2: {

                clearScreen();
                login();
                printf("HI dear admin, Welcome your hotel!\n");
                admin_menu:
                printf("===============MENU=================\n");
                printf("1- Rooms information\n");
                printf("2- Manage customers and reservations\n");
                printf("3- Create a promotion\n");
                printf("4- manage employer\n");
                printf("5- Go Back\n");

                do{
                    printf("Please enter the number corresponding to the desired option in the menu:");
                    scanf("%d", &rep1);
                } while (rep1 < 1 || rep1 > 5);

                switch (rep1) {

                    case 1:{
                    // roominfo();
                    clearScreen();
                    printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto admin_menu;
                        break;}

                    case 2:{
                        // manage();
                        clearScreen();
                     printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto admin_menu;
                        break;}

                    case 3:{
                        // promotion();
                        clearScreen();
                     printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto admin_menu;
                        break;}

                    case 4:{
                        clearScreen();
                        manage_employer(e);

                     printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   clearScreen();
                   if(r==1)
                   goto admin_menu;
                        break;}

                    case 5:{
                        clearScreen();
                        goto user_menu;
                        break;}
                }

            break;
        }
    }

    return 0;
}
