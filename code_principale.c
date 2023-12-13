#include "main.h"

int main() {
    int r, nbr;
    char *st;
    FILE *room, *customer, *reservation, *employ, *delroom, *temp, *delResr, *delcos, *fedback;
    room = fopen("room.txt", "a+");
    customer = fopen("customer.txt", "a+");
    reservation = fopen("reservation.txt", "a+");
    employ = fopen("employ.txt", "a+");
    client f;
    employer e;
    rooom ro;
    reservationn rs;
    int rep0, rep1, rep2;
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

    switch (rep0) {
        case 1: {
            clearScreen();

            menu:
            printf("HI dear client, Welcome to our hotel!\n");
            printf("===============MENU=================\n");
            printf("1- Discover our Hotel\n");
            printf("2- Book a stay\n");
            printf("3- Give us your feedback\n");
            printf("4- GO back");

            do {
                printf("\nPlease enter the number corresponding to the desired option in the menu:");
                scanf("%d", &rep1);
            } while (rep1 < 1 || rep1 > 5);

            switch (rep1) {
                case 1: {
                    clearScreen();
    printf("Welcome to Hotel Transylvania! Experience elegance and mystique in the heart of Transylvania.Captivating atmosphere with timeless charm and supernatural touches. Legendary accommodations, from Cozy Crypts to Lavish Lair Suites, offer a luxurious and mysterious stay. Indulge in Dining in Darkness for a hauntingly heavenly culinary experience. Hotel Transylvania is a hub of entertainment with an Enchanting Elegance Spa, Midnight Pool, and mesmerizing performances at the Dracula Theater. Enjoy personalized service led by Count Dracula himself. Book your escape for a romantic, family, or solo adventure. Embrace the legend at Hotel Transylvania - Where Elegance Meets the Extraordinary.\n");


                    printf("\n");
                    printf("\nyou want to return to menu (1:yes)");
                    scanf("%d", &r);
                    if (r == 1)
                        clearScreen();
                    goto menu;
                    break;
                }

                case 2: {
                    clearScreen();
                    book(rs);
                    printf("you want to return to menu (1:yes)");
                    scanf("%d", &r);
                    clearScreen();
                    if (r == 1)
                        goto menu;

                    break;
                }

                case 3: {
                    clearScreen();
                    feedback();
                    printf("you want to return to menu (1:yes)");
                    scanf("%d", &r);
                    clearScreen();
                    if (r == 1)
                        goto menu;

                    break;
                }

                case 4: {
                    clearScreen();
                    goto user_menu;
                    break;
                }
            }
        }

        case 2: {
            clearScreen();
            login();
            printf("HI dear admin, Welcome your hotel!\n");
            admin_menu:
            printf("===============MENU=================\n");
            printf("1- Manage rooms\n");
            printf("2- Manage customers\n");
            printf("3- Manage reservation\n");
            printf("4- Manage employer\n");
            printf("5- Go Back\n");

            do {
                printf("Please enter the number corresponding to the desired option in the menu:");
                scanf("%d", &rep1);
            } while (rep1 < 1 || rep1 > 5);

            switch (rep1) {
                case 1: {
                    clearScreen();

                    manage_room:
                    printf("choose by number\n");
                    do {
                        printf("\n");
                        printf("1- Add room\n");
                        printf("\n");
                        printf("2- See room\n");
                        printf("\n");
                        printf("3- Delete room\n");
                        printf("\n");
                        printf("4- Change room status\n");
                        printf("\n");
                        printf("5- Go back\n");
                        printf("Choose from the menu:");

                        scanf("%d", &rep1);
                        if (rep1 < 1 || rep1 > 6) {
                            printf("\n");
                            printf("inexisted number please try to enter an available number\n\n");
                        }
                    } while (rep1 < 1 || rep1 > 6);

                    switch (rep1) {
                        case 1: {
                            clearScreen();
                            add_room(ro);

                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto manage_room;
                            break;
                        }

                        case 2: {
                            clearScreen();
                            see_room(ro);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto manage_room;
                            break;
                        }

                        case 3: {
                            clearScreen();
                            remove_room(ro);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto manage_room;
                            break;
                        }

                        case 4: {
                            clearScreen();
                            printf("enter room number");
                            scanf("%d", &nbr);
                            do {
                                printf("enter room status type (YES) or (NO):");
                                scanf("%s", st);
                            } while (strcmp(st, "YES") != 0 && strcmp(st, "NO") != 0);

                            change_status(ro, nbr, &st);
                            break;
                        }

                        case 5: {
                            clearScreen();
                            goto admin_menu;
                            break;
                        }
                    }

                    break;
                }

                case 2: {
                    clearScreen();
                    menu2:
                    printf("1- Add customer\n");
                    printf("2- Delete customer\n");
                    printf("3- Modify customer\n");
                    printf("4- See customers\n");
                    printf("5- Go back\n");
                    printf("Please enter the number corresponding to the desired option in the menu:");
                    scanf("%d", &rep2);
                    switch (rep2) {
                        case 1: {
                            clearScreen();
                            addCustomer(f);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu2;
                            break;
                        }
                        case 2: {
                            clearScreen();
                            deleteCustumer(f);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu2;
                            break;
                        }
                        case 3: {
                            clearScreen();
                            modifyCustomer(f);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu2;
                            break;
                        }
                        case 4: {
                            clearScreen();
                            seeCustomer(f);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu2;
                            break;
                        }
                        case 5: {
                            clearScreen();
                            goto admin_menu;
                            break;
                        }
                    }

                    break;
                }

                case 3: {
                    clearScreen();
                    menu4:
                    printf("1- Add reservation\n");
                    printf("2- Delete reservation\n");
                    printf("3- Modify reservation\n");
                    printf("4- See reservations\n");
                    printf("5- Go back\n");
                    printf("Please enter the number corresponding to the desired option in the menu:");
                    scanf("%d", &rep2);

                    switch (rep2) {
                        case 1: {
                            clearScreen();
                            addReservation(rs, f, ro);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu4;
                            break;
                        }

                        case 2: {
                            clearScreen();
                            deleteReservations(rs);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu4;
                            break;
                        }

                        case 3: {
                            clearScreen();
                            modifyReservation(rs, ro);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu4;
                            break;
                        }

                        case 4: {
                            clearScreen();
                            seeReservation(rs);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu4;
                            break;
                        }

                        case 5: {
                            goto admin_menu;
                            break;
                        }
                    }

                    break;
                }

                case 4: {
                    clearScreen();
                    menu3:
                    printf("1- Add Employer\n");
                    printf("2- Delete Employer\n");
                    printf("3- Modify Employer\n");
                    printf("4- See Employers\n");
                    printf("5- Go back\n");
                    printf("Please enter the number corresponding to the desired option in the menu:");
                    scanf("%d", &rep2);

                    switch (rep2) {
                        case 1: {
                            clearScreen();
                            add_employer(e);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu3;
                            break;
                        }
                        case 2: {
                            clearScreen();
                            remove_employer(e);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu3;
                            break;
                        }
                        case 3: {
                            clearScreen();
                            modify_employer(e);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu3;
                            break;
                        }
                        case 4: {
                            clearScreen();
                            see_employer(e);
                            printf("you want to return to menu (1:yes)");
                            scanf("%d", &r);
                            clearScreen();
                            if (r == 1)
                                goto menu3;
                            break;
                        }
                        case 5: {
                            clearScreen();
                            goto admin_menu;
                            break;
                        }
                    }

                    break;
                }
            }

            case 5: {
                clearScreen();
                goto user_menu;
                break;
            }
        }
    }

    return 0;
}   
