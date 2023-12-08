#include "main.h"

void manage_room(room r);

int main() {
    int r;
    
   

room ro;
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
                   discoverroom();
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
                //if user choose admin
        case 2: {

                clearScreen();
                login();
                printf("HI dear admin, Welcome your hotel!\n");
                admin_menu:
                clearScreen();
                printf("===============MENU=================\n");
                printf("1- Manage Rooms \n");
                printf("2- Manage reservations\n");
                printf("3- Create a promotion\n");
                printf("4- manage employer\n");
                printf("5- Go Back\n");

                do{
                    printf("Please enter the number corresponding to the desired option in the menu:");
                    scanf("%d", &rep1);
                } while (rep1 < 1 || rep1 > 5);

                switch (rep1) {
//----------------------------------------------manage room----------------------------------------------
                    case 1:{
                         clearScreen();
                     int rep1,nbr;
                     char st[10];
 manage_room:
printf("choose by number\n");
do{
            printf("\n");
            printf("1-add room\n");
            printf("\n");
            printf("2-delete room\n");
            printf("\n");
            printf("3-discover rooms\n");
           printf("\n");
            printf("4-modify rooms information\n");
            printf("\n");
            printf("5-change room status\n");
            printf("\n");
            printf("6-go back\n");
            printf("Please enter the number corresponding to the desired option:");

            scanf("%d",&rep1);
            if(rep1<1 || rep1>6){
                printf("\n");
                printf("inexisted number please try to entre an available numbre\n\n");}
            }while(rep1<1 || rep1>6);


switch(rep1){
    case 1:{ add_room(ro); 
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manage_room;
                        break;
     break;}
    case 2:{remove_room(ro);
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manage_room;
                        break;
     break;}
    case 3: {see_room(ro); 
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manage_room;
                        break;
    break;}
    case 4: {modify_room(ro); 
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manage_room;
                        break;
    break;}
        case 5: {
            printf("enter room number");
            scanf("%d",&nbr);
            do{
            printf("enter room status");
            scanf("%s",st);}while(strcmp(st,"yes")!=0 && strcmp(st,"no")!=0);
            
            change_status(ro,nbr,&st); break;}

    case 6:{ goto admin_menu; 
    
    break;}
}
                    
                        break;}

                    case 2:{
                        // manage_reservation();
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
// -----------------------------------manage employer---------------------------------
                    case 4:{
                        clearScreen();
                          int rep1;
 manageemploye:
 clearScreen();
printf("choose by number\n");
do{
            printf("\n");
            printf("1-add employer\n");
            printf("\n");
            printf("2-delete employer\n");
            printf("\n");
            printf("3-discover employers\n");
           printf("\n");
            printf("4-modify employers information\n");
printf("\n");
            printf("5-go back\n");
            printf("Please enter the number corresponding to the desired option:");

            scanf("%d",&rep1);
            if(rep1<1 || rep1>5){
                printf("\n");
                printf("inexisted number please try to entre an available numbre\n\n");}
            }while(rep1<1 || rep1>5);


switch(rep1){
    case 1: {add_employer(e); 
                 printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manageemploye;
                        break;
     break;}
    case 2:{remove_employer(e); 
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manageemploye;
                        break;
    break;}
    case 3: {see_employer(e);
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manageemploye;
                        break;
     break;}
    case 4:{ modify_employer(e); 
                printf("you want to return to menu (1:yes)");
                   scanf("%d",&r);
                   if(r==1)
                   goto manageemploye;
                        break;
    break;}
    case 5:goto admin_menu; break;
}

                     
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




   
