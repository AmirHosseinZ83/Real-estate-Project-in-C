#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>


struct user {
    char username[50];
    char name[50];
    char family_name[50];
    char ncode[50];
    char numberphone[50];
    char email[50];
    char password[50];
    struct user *next;
};
struct user* createPerson(char *username, char *name, char *family_name, char *ncode, char *numberphone, char *email, char *password) {
    struct user *newPerson = (struct user*)malloc(sizeof(struct user));

    strcpy(newPerson->username, username);
    strcpy(newPerson->name, name);
    strcpy(newPerson->family_name, family_name);
    strcpy(newPerson->ncode, ncode);
    strcpy(newPerson->numberphone, numberphone);
    strcpy(newPerson->email, email);
    strcpy(newPerson->password, password);
    newPerson->next = NULL;

    return newPerson;
}
    struct user *head = NULL;
    struct user *current = NULL;


void su(void);
void si();
void menu (void);
void menuuser();
void rigester(void);
void setting(void);
void reports(void);
void adminmenu();


void main (void)
{
    menu();
}
void menu(void)
{
    printf("Hello, Welcome to Amir Hossein Real Estate Program!\n\n");
    printf("1 - Sign UP\n2 - Sign In\n3 - Exit\n\n\n>Please Enter Your Choice: ");

    char input;
   f: input = getchar();
    switch (input)
    {
        case '1':
            system("cls");
            fflush(stdin);
            su();
            break;
        case '2':
            system("cls");
            fflush(stdin);
            si();
            break;
        case '3':
            system("cls");
            printf("The program was closed");
            exit(0);
        default :
            fflush(stdin);
            system("cls");
            menu();


    }

}





void su(void)
{
    FILE *ui;
    ui = fopen ("Informations of Users.txt", "a");
    char temp[50];
    printf("Sign UP function --- (If you want to go to the menu, press 0) \n");
    printf("Ok you must enter your information for Sign Up !\n");

    printf ("\n-User Name (if you enter the single character \"0\" , you will return to the menu) : ");
    scanf("%s",&temp);
    if (strcmp(temp ,"0") == 0)
    {
        fflush(stdin);
        system("cls");
        menu();
    }
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
    fflush(stdin);
    system("cls");
    menu();

}

void si()
{

    printf("Sign In function --- (If you want to go to the menu, press 0)\n");
    FILE *file;
    char line[100];

    file = fopen("Informations of Users.txt", "r");


    while (fgets(line, sizeof(line), file) != NULL)
    {
        line[strcspn(line, "\n")] = 0;

        struct user *newPerson = createPerson(line, "", "", "", "", "", "");

        if (head == NULL) {
            head = newPerson;
            current = head;
        } else {
            current->next = newPerson;
            current = current->next;
        }

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->name, line);

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->family_name, line);

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->ncode, line);

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->numberphone, line);

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->email, line);

        fgets(line, sizeof(line), file);
        line[strcspn(line, "\n")] = 0;
        strcpy(current->password, line);
    }
    fclose(file);

    char inputUsername[50];
    char inputPassword[50];

bck:printf("Enter username: \n");
    scanf("%s", inputUsername);
    if (strcmp(inputUsername ,"0") == 0)
    {
        fflush(stdin);
        system("cls");
        menu();
    }

    int loggedIn = 0;
    // to search username and password
    current = head;
    while (current != NULL)
    {
        if ( strcmp(inputUsername, "ahz1383")==0)
        {
            loggedIn = 2;
            break;
        }
        if (strcmp(current->username, inputUsername) == 0 )
        {
            loggedIn = 1;
            break;
        }
            current = current->next;
    }

    if (loggedIn == 0)
    {
        printf("Invalid User Name . \n");
        goto bck;
    }
    int i = 0 , j = 0 ;
    if (loggedIn == 2)
    {
        i = 3 ;
        bck2:printf("Enter password (%d attempts left): \n" , i);
        scanf("%s", inputPassword);
        loggedIn = 0;
        current = head;
        while (current != NULL)
        {
            if (strcmp(current->password, inputPassword) == 0)
            {
                loggedIn = 2;
                break;
            }
            current = current->next;
        }
    }
    else
    {
        j =3;
        bck1:printf("Enter password (%d attempts left): \n" , j);
        scanf("%s", inputPassword);
        loggedIn = 0;
        current = head;
        while (current != NULL)
        {
            if (strcmp(current->password, inputPassword) == 0)
            {
                loggedIn = 1;
                break;
            }
            current = current->next;
        }
    }
    if (loggedIn == 0 && i > 1)
    {
        printf("Invalid Password.\n" , i);
        i-- ;
        goto bck2;
    }
    if (loggedIn == 0 && j > 1)
    {
        printf("Invalid Password.\n" , j);
        j-- ;
        goto bck1;
    }
    if (i == 1 || j == 1)
    {

        printf("\nYour attempts were too many.\n Please press the key to be redirected to the menu \n");
        getch();
        fflush(stdin);
        system("cls");
        menu();

    }

    if (loggedIn == 1)
    {
        system("cls");
        fflush(stdin);
        menuuser();
    }
    if (loggedIn == 2)
    {
        system("cls");
        fflush(stdin);
        adminmenu();
    }

}
void menuuser()
{
    printf("Limited access for %s \n" ,current->username);
    printf("1 - Register new information\n2 - Delete information\n3 - reports\n4 - User account settings\n5 - Log out (return to the previous menu)\n\n\n>Please Enter Your Choice: ");

    char input;
    input = getchar();
    switch (input)
    {
        case '1':
            system("cls");
            rigester();
            break;
        case '2':
            system("cls");
            rigester();
            break;
        case '3':
            system("cls");
            reports();
            break;
        case '4':
            system("cls");
            setting();
            break;
        case '5':
            system("cls");
            menu();
        default :
            fflush(stdin);
            system("cls");
            menuuser();
    }
}
void adminmenu()
{
    printf("ADMINISTRATOR - FULL access for %s \n" ,current->username);
    printf("1 - Register new information\n2 - Delete information\n3 - reports\n4 - User account settings\n5 - Log out (return to the previous menu)\n\n\n>Please Enter Your Choice: ");

    char input;
    input = getchar();
    switch (input)
    {
        case '1':
            system("cls");
            rigester();
            break;
        case '2':
            system("cls");
            rigester();
            break;
        case '3':
            system("cls");
            reports();
            break;
        case '4':
            system("cls");
            setting();
            break;
        case '5':
            system("cls");
            menu();
        default :
            fflush(stdin);
            system("cls");
            menuuser();
    }

}
void rigester()
{

}
void setting()
{

}
void reports()
{

}
