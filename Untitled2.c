#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>


void su();
void si();
void menu ();

void main ()
{
    while (1)
    {
        system("cls");
        menu();
    }
}
void menu()
{
    printf("Hello, Welcome to Amir Hossein Real Estate Program!\n\n");
    printf("1 - Sign UP\n2 - Sign In\n3 - Exit\n\n\n>Please Enter Your Choice: ");

    char input;
    input = getchar();
    switch (input)
    {
        case '1':
            system("cls");
            su();
            break;
        case '2':
            system("cls");
            si();
            break;
        case '3':
            system("cls");
            printf("The program was closed");
            exit(0);
    }
}





void su()
{
    FILE *ui;
    ui = fopen ("Informations of Users.txt", "a");
    char temp[50];
    printf("Sign UP \n");
    printf("Ok you must enter your information for Sign Up !\n");

    printf ("\n-User Name : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-Name : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-Last Name : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-National Code : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-Mobile Number : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-Email Address : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);

    printf("\n-Password : ");
    scanf("%s",&temp);
    fputs(temp , ui);
    fputs("\n",ui);


    fclose(ui);
    printf("\nDONE !!\n This account was created.\n");
    printf("\nPress a key for back to menu \n");
    getch();
    system("cls");

}

void si()
{
    FILE *ui;
    ui = fopen ("Informations of Users.txt", "r");
    struct inf
    {
        char username[50];
        char name[50];
        char lastname[50];
        char ncode[10];
        char phone[11];
        char email[50];
        char password[50];
    };
    char temp[50];
    printf("Sign In function\n");
    printf ("\n-User Name : ");
    scanf("%s",&temp);

    fclose(ui);

    printf("\nPress a key for back to menu \n");
    getch();
    system("cls");
}
