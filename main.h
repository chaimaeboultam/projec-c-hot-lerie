#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXResrvation 100


typedef struct room{
    char type[20];
    int number;
    float price;
    char Availability[10];
}room;
typedef struct client{
    int Cin;
    int phone;
    char name[30],feedback[100];
    char adresse[30];
    int reservationDetails[MAXResrvation];
}client;
typedef struct reservation{
    int idReservation;
    int idRoom;
    int idClient;
    char checkIn[10];
    char checkOut[10];
}reservation;



//***********************declaration des fonction************************
void discoverroom();
void service();
void feedback(client *f);






















//  ********************************definition des fonctions******************************************

void discoverroom(){
 printf("in our hotel we have the following type of rooms :\n\n"
"          NORMAL ROOM :(price of 150$ per night)\n\n"
" you will get:-Cozy and spacious with a choice of single, double, or twin beds.\n"
"              -Bathroom with a hot shower and complimentary toiletries.\n"
"              -Flat-screen TV with a wide selection of cable channels.\n"
"              -High-speed Wi-Fi for staying connected.\n"
"              -Mini refrigerator to keep your beverages and snacks cool.\n"
"              -In-room coffee and tea-making facilities.\n"
"              -Work desk for business travelers.\n"
"              -Complimentary daily housekeeping to keep your room fresh and tidy.\n");

printf("\n*************************************************************************************\n\n");

printf("   NORMAL ROOM :(price of 1500$ per night)\n\n"
" you will get:-Exquisite, upscale furnishings and decor.\n"
"              -A spacious layout with king-sized beds for maximum comfort.\n"
"              -Lavish en-suite bathrooms with a bathtub and premium toiletries.\n"
"              -A private balcony or terrace with stunning views of the surroundings.\n"
"              -State-of-the-art entertainment system with a large flat-screen TV.\n"
"              -High-speed Wi-Fi for seamless connectivity.\n"
"              -A fully stocked mini-bar with a selection of snacks and beverages.\n"
"              -In-room espresso machine for your coffee indulgence.\n"
"              -Personalized concierge service to cater to your needs.\n"
"              -Complimentary access to our exclusive lounge or spa facilities.\n");
}

void service(){
    printf("our additional service and promotion:\n\n"
    "        ~spa(20$)\n     "
    "   ~gym(20$)\n     "
    "   ~for special client who reserve in our hotel in last 30 day will have reduction of 50%% from the price of the room \n   "
    );
}
 void feedback(client *f){

    printf("we are glad to hear your feedback:\n");
    scanf(" %[^\n]",f->feedback);
    printf("thank for your feedback\n");
 }




#endif // MAIN_H

