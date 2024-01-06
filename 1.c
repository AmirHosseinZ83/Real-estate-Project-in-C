#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>


void su();
void si();
void menu ();

void main ()
{
    menu();
}
void menu()
{
    printf("Hello, Welcome to Amir Hossein Real Estate Program!\n\n");
    printf("1 - Sign UP\n2 - Sign In\n3 - Exit\n\n\n>Please Enter Your Choice: ");

    char input;
    do
    {
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
            default:
                printf("\nInvalid choice! Please enter a valid option (1, 2, or 3): ");
                while (getchar() != '\n'); // Clear the input buffer
                break;
        }
        printf("\n\n>Please Enter Your Choice: ");
    } while (1);
}





void su()
{
    printf("Sign UP \n");
    printf("Ok you must enter your information for Sign Up !\n");
    printf ("\n-User Name : ");
    printf("\n-Name : ");
    printf("\n-Last Name : ");
    printf("\n-National Code : ");
    printf("\n-Mobile Number : ");
    printf("\n-Email Address : ");

    printf("\n-Password : ");

}

void si()
{
    printf("Sign In function\n");
}
