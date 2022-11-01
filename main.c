#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    char pass[10],password[10]="corefour";
    int i;
    printf("\n\n\n");
    printf("\n\t\t\t                    ---------***---------");
    printf("\n\t\t\t            ~~~~~~~~~~~~~~~~~ * ~~~~~~~~~~~~~~~~~ ");
    printf("\n\t\t\t        |                                           |");
    printf("\n\t\t\t        |                  WELCOME                  |");
    printf("\n\t\t\t        |                    TO                     |");
    printf("\n\t\t\t        |                  \"DIUCB\"                  |");
    printf("\n\t\t\t        |      DAFFODIL INTERNATIONAL UNIVERSITY    |");
    printf("\n\t\t\t        |               CENTRAL BANK                |");
    printf("\n\t\t\t        |                                           |");
    printf("\n\t\t\t            ~~~~~~~~~~~~~~~~~ * ~~~~~~~~~~~~~~~~~ ");
    printf("\n\t\t\t                    ---------***---------\n");
    printf("\n\n\t\tEnter the admin password to login:");
    scanf("%s",pass);
    if (strcmp(pass,password)==0)
    {
        printf("\n\nPassword Match!\nLOADING.....");

    }
    getch();

}
