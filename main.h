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

typedef struct {
char nom_e[10],prenom_e[10],post[10];
int tel_e,code_e;
}employer;

FILE *p,*q; // p pointer on employer file et q for delete file

//***********************declaration des fonction************************
void clearScreen();
void login();
void discoverroom();
void service();
void feedback(client *f);
void manage_employer(employer e);
void add_employer(employer e);
void see_employer(employer e);
void remove_employer(employer e);
void modify_employer(employer e);
int search_code(employer e,int code);

















//  ********************************definition des fonctions******************************************

void clearScreen() {
    #ifdef _WIN32 // Check if the operating system is Windows
        system("cls"); // For Windows systems
    #else
        system("clear"); // For Linux/Unix systems
    #endif
}
void login(){
    int cni,code;
    printf("*****login*****\n");
   do {printf("enter your cni: ");
   scanf("%d",&cni);
printf("enter password: ");
scanf("%d",&code);
clearScreen();
   }while(cni!=123 || code!=1234);
}
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

printf("   SPECIAL ROOM :(price of 1500$ per night)\n\n"
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




//**************************************admin part******************************
int search_code(employer e,int code){
    int a=0;
    p=fopen("employer.txt","r");
 if(p==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    while(!feof(p)){
        fscanf(p,"%d %s %s %s %d\n",&e.code_e,e.nom_e,e.prenom_e,e.post,&e.tel_e);
    if(e.code_e==code){
        a=1;
        break;
    }
    }

return a;

}

void manage_employer(employer e){
    int rep1;
 manageemploye:
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

            printf("Please enter the number corresponding to the desired option:");
            
            scanf("%d",&rep1);
            if(rep1<1 || rep1>4){
                printf("\n");
                printf("inexisted number please try to entre an available numbre\n\n");}
            }while(rep1<1 || rep1>4);


switch(rep1){
    case 1: add_employer(e);  break;
    case 2:remove_employer(e); break;
    case 3: see_employer(e); break;
    case 4: modify_employer(e); break;
}
}



void add_employer(employer e){
clearScreen();
    int n;// numbre of employer in hotel
    p=fopen("employer.txt","a");
    if(p==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    printf("enter the number of employer you want to add");
    scanf("%d",&n);
    printf("entrer les emploiyer\n");

    for(int i=1;i<=n;i++){
        printf("employer code:");

    scanf("%d",&e.code_e);
    printf("firstname:");
    scanf("%s",e.nom_e);
    printf("last name:");
    scanf("%s",e.prenom_e);
    printf("post:");
    fflush(stdin);
    gets(e.post);
    printf("\n phone:");
    scanf("%d",&e.tel_e);
    fprintf(p,"%d %s %s %s %d\n",e.code_e,e.nom_e,e.prenom_e,e.post,e.tel_e);}
    fclose(p);
    printf("employers added\n");

}

void see_employer(employer e){
p=fopen("employer.txt","r");
     if(p==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    printf("code firstname lastname post phone\n");
    while(!feof(p)){
    fscanf(p,"%d %s %s %s %d\n",&e.code_e,e.nom_e,e.prenom_e,e.post,&e.tel_e);
    printf("%d %s %s %s %d\n",e.code_e,e.nom_e,e.prenom_e,e.post,e.tel_e);
    }


}
 void remove_employer(employer e){
        int del;
p=fopen("employer.txt","r");
     if(p==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    q=fopen("delemployer.txt","w");
     if(q==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    printf("enter employer code you want to delete: ");
    scanf("%d",&del);


    while(!feof(p) ){
    fscanf(p,"%d %s %s %s %d\n",&e.code_e,e.nom_e,e.prenom_e,e.post,&e.tel_e);
    if(e.code_e != del)
    fprintf(q,"%d %s %s %s %d\n",e.code_e,e.nom_e,e.prenom_e,e.post,e.tel_e);
    }
    fclose(q);
    fclose(p);
    remove("employer.txt");
    rename("delemployer.txt","employer.txt");
    printf("employer removed");
}
/*-------------------------------------------------------------------------------------------*/
void modify_employer(employer e){
        int code,a;
p=fopen("employer.txt","r");
     if(p==NULL){
        printf("error uploading employer file");
return 0 ;
    }
    q=fopen("delemployer.txt","w");
     if(q==NULL){
        printf("error uploading employer file");
return 0 ;
    }

    do{
    printf("enter employer code you want to modify\n");
    scanf("%d",&code);
     a=search_code(e,code);
     }while(a==0);

     rewind(p);

    while(!feof(p) ){
    fscanf(p,"%d %s %s %s %d\n",&e.code_e,e.nom_e,e.prenom_e,e.post,&e.tel_e);
    if(e.code_e == code){
        printf("enter correct inforamtion\n\n");

    printf("employer code:");
    scanf("%d",&e.code_e);
    printf("firstname:");
    scanf("%s",e.nom_e);
    printf("last name:");
    scanf("%s",e.prenom_e);
    printf("post:");
    fflush(stdin);
    gets(e.post);
    printf("\n phone:");
    scanf("%d",&e.tel_e);
    }
    fprintf(q,"%d %s %s %s %d\n",e.code_e,e.nom_e,e.prenom_e,e.post,e.tel_e);
    }
    fclose(q);
    fclose(p);
    
    remove("employer.txt");
    
    printf("employer modified\n");
}


#endif // MAIN_H

