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
    char name[30];
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


#endif // MAIN_H

