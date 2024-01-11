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
void Sell();
void Rent();


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
            printf("\nThe Program Was Closed\n");
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


    struct sup
        {

            char username[50];
            char name[50];
            char lastname[50];
            char ncode[50];
            char phone[50];
            char email[50];
            char password[50];


        };

    struct sup people;


    printf ("\n-User Name (if you enter the single character \"0\" , you will return to the menu) : ");
    scanf("%s",temp);
    if (strcmp(temp ,"0") == 0)
    {
        fflush(stdin);
        system("cls");
        menu();
    }
    else
        strcpy(people.username,temp);

    getchar();
    printf("\n-Name : ");
x1: gets(people.name);

    printf("\n-Last Name : ");
    gets(people.lastname);
    printf("\n-National Code : ");
    scanf("%s", people.ncode);

    printf("\n-Mobile Number : ");
    scanf("%s",people.phone);

    printf("\n-Email Address : ");
    scanf("%s", people.email);

x2:  printf("\n-Password : ");
    char temp2[50];
    scanf("%s", temp2);
    printf("\n-Repeat The Password Again: ");
    scanf("%s", temp);
    if(strcmp(temp ,temp2) == 0)
        strcpy(people.password,temp);
    else
    {
         printf("\nPasswords are not the Same !\n");
        goto x2;
    }
    fflush(stdin);

    fputs("\n",ui);
    fputs(people.username , ui);
    fputs("\n",ui);
    fputs(people.name , ui);
    fputs("\n",ui);
    fputs(people.lastname , ui);
    fputs("\n",ui);
    fputs(people.ncode , ui);
    fputs("\n",ui);
    fputs(people.phone , ui);
    fputs("\n",ui);
    fputs(people.email , ui);
    fputs("\n",ui);
    fputs(people.password , ui);


    fflush(stdin);

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
bck1:   printf("Enter password (%d attempts left): \n" , j);
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
        menuuser(1);
    }
    if (loggedIn == 2)
    {
        system("cls");
        fflush(stdin);
        menuuser(2);
    }

}
void menuuser(int admin)
{
    if (admin == 2)
        printf("ADMINISTRATOR - FULL access for %s \n" ,current->username);
    else
        printf("Limited access for %s \n" ,current->username);
    printf("1 - Register new information\n2 - Delete information\n3 - reports\n4 - User account settings\n5 - Log out (return to the previous menu)\n\n\n>Please Enter Your Choice: ");

    char input;
    input = getchar();
    switch (input)
    {
        case '1':
            fflush(stdin);
            system("cls");
            printf("1 - SELL\n2 - RENT\n3 - Back To Menu\n\n\n>Please Enter Your Choice: ");
            input = getchar();
            switch (input)
            {
                case '1':
                    fflush(stdin);
                    system("cls");
                    if (admin == 2)
                        Sell(2);
                    else
                        Sell(1);
                    break;
                case '2':
                    fflush(stdin);
                    system("cls");
                    if (admin == 2)
                        Rent(2);
                    else
                        Rent(1);
                    break;
                case '3':
                    fflush(stdin);
                    system("cls");
                    if (admin == 2)
                        menuuser(2);
                    else
                        menuuser(1);
                default :
                    fflush(stdin);
                    system("cls");
                    if (admin == 2)
                        menuuser(2);
                    else
                        menuuser(1);
            }
            break;
        case '2':
            fflush(stdin);
            system("cls");
            break;
        case '3':
            fflush(stdin);
            system("cls");
            reports();
            break;
        case '4':
            fflush(stdin);
            system("cls");
            setting();
            break;
        case '5':
            fflush(stdin);
            system("cls");
            menu();
        default :
            fflush(stdin);
            system("cls");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
    }
}


void Sell(int admin)
{
    printf("1 - House registration\n2 - Office registration\n3 - Land registration\n4 - Return To The Previous Menu\n\n\n>Please Enter Your Choice: ");
    char a = getchar();
    if (a == '1')
    {
        fflush(stdin);
        system("cls");
        FILE *houses;
        houses = fopen("House-Sale.txt","a");
        if (houses == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


        struct infhs
        {
            int area;
            char address[150];
            char type[20];
            int old;
            int meterage;
            int floor;
            int total_meterage;
            char phone[12];
            int bedroom;
            char cost[12];
        };

        struct infhs property;

        printf("\n-Municipal area (indicating the location of the property in the city): ");
        scanf("%d", &property.area);

        getchar();
        printf("\n-Address: ");
        fgets(property.address, sizeof(property.address), stdin);

        printf("\n-Property type (apartment or villa): ");
        scanf("%s", &property.type);

        printf("\n-Age: ");
        scanf("%d", &property.old);

        printf("\n-The size of the infrastructure: ");
        scanf("%d", &property.meterage);

        printf("\n-Floor: ");
        scanf("%d", &property.floor);

        printf("\n-The size of the main land of the property: ");
        scanf("%d", &property.total_meterage);

        printf("\n-Contact number of the owner: ");
        scanf("%s", &property.phone);

        printf("\n-Number of bedrooms: ");
        scanf("%d", &property.bedroom);

        printf("\n-Sales price: ");
        scanf("%s", &property.cost);

        printf("\n\n Press the key to register : ");
        getch();
        fflush(stdin);

        fprintf(houses, "%d\n", property.area);
        fprintf(houses, "%s", property.address);
        fprintf(houses, "%s", property.type);
        fprintf(houses , "\n%d\n%d\n%d\n", property.old, property.meterage, property.floor);
        fprintf(houses, "%d\n%s\n%d\n%s\n", property.total_meterage, property.phone, property.bedroom, property.cost);


        printf("\n\nThe property has been successfully registered.\nPress the key to return to the user menu :");
        getch();
        fflush(stdin);
        fclose(houses);
        system("cls");
        if (admin == 2)
            menuuser(2);
        else
            menuuser(1);
    }
    if (a == '2')
    {

    }
    if (a == '3')
    {

    }
    if (a == '4')
    {
        fflush(stdin);
        system("cls");
        if (admin == 2)
            menuuser(2);
        else
            menuuser(1);
    }
    else
    {
        fflush(stdin);
        system("cls");
        if (admin == 2)
            Sell(2);
        else
            Sell(1);
    }


}





void Rent(int admin)
{
    printf("Rent");
    getch();
    printf("\nDONE !!\n This account was created.\n");
    printf("\nPress a key for back to menu \n");
    getch();
    fflush(stdin);
    system("cls");
    if (admin == 2)
        menuuser(2);
    else
        menuuser(1);
}
void setting()
{

}
void reports()
{

}

