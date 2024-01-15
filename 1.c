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
void setting();
void reports(void);
void adminmenu();
void Sell();
void Rent();
void edit();


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
    while (1)
    {
        if (scanf(" %[^\n]", people.name) != 1)
        {
            // Handle invalid input (non-alphabetic characters)
            printf("Invalid input. Please enter a name using only alphabetical characters: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        else
        {
            int isValid = 1;

            // Check if all characters are alphabetic
            for (size_t i = 0; i < strlen(people.name); ++i)
            {
                if (!isalpha(people.name[i]))
                {
                    isValid = 0;
                    break;
                }
            }

            if (isValid)
            {
                break;
            }
            else
            {
                printf("Invalid input. Please enter a name using only alphabetical characters: ");
            }
        }
    }

    printf("\n-Last Name : ");
    while (1)
    {
        if (scanf(" %[^\n]", people.lastname) != 1)
        {
            // Handle invalid input (non-alphabetic characters)
            printf("Invalid input. Please enter a Last name using only alphabetical characters: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        else
        {
            int isValid = 1;

            // Check if all characters are alphabetic
            for (size_t i = 0; i < strlen(people.lastname); ++i)
            {
                if (!isalpha(people.lastname[i]))
                {
                    isValid = 0;
                    break;
                }
            }

            if (isValid)
            {
                break;
            }
            else
            {
                printf("Invalid input. Please enter a Last name using only alphabetical characters: ");
            }
        }
    }
    printf("\n-National Code : ");

    while (1)
    {
        if (scanf("%s", people.ncode) != 1)
        {
            // Handle invalid input (non-numeric characters)
            printf("Invalid input. Please enter a numeric 10-digit national code: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        else
        {
            int isValid = 1;

            // Check if all characters are digits
            for (size_t i = 0; i < strlen(people.ncode); ++i)
            {
                if (!isdigit(people.ncode[i]))
                {
                    isValid = 0;
                    break;
                }
            }

            if (isValid && strlen(people.ncode) == 10)
            {
                break;
            }
            else
            {
                printf("Invalid input. Please enter a numeric 10-digit national code: ");
            }
        }
    }

    printf("\n-Mobile Number : ");
    while (1)
    {
        if (scanf("%s", people.phone) != 1)
        {
            // Handle invalid input (non-numeric characters)
            printf("Invalid input. Please enter a numeric 10-digit phone number starting with 09: ");
            while (getchar() != '\n');  // Clear input buffer
        }
        else
        {
            int isValid = 1;

            // Check if the entered phone number starts with '09'
            if (strncmp(people.phone, "09", 2) != 0)
            {
                isValid = 0;
            }

            // Check if all characters are digits
            for (size_t i = 2; i < strlen(people.phone); ++i)
            {
                if (!isdigit(people.phone[i]))
                {
                    isValid = 0;
                    break;
                }
            }

            if (isValid && strlen(people.phone) == 11)
            {
                break;
            }
            else
            {
                printf("Invalid input. Please enter a numeric 11-digit phone number starting with 09: ");
            }
        }
    }
    fflush(stdin);

    printf("\n-Email Address : ");
    int  i1 =0 , t = 0 ;
    while(1)
    {
        fflush(stdin);
        gets(people.email);
        fflush(stdin);
        while (people.email[i1] != '\0')
        {
            if (people.email [i1] == '@' && (isalpha(people.email[i1-1]) || isdigit(people.email[i1-1])) )//Find @ in Email Format
            {
                i1++;
                break;
            }
            i1++ ;
        }
        while (people.email[i1] != '\0')
        {
            if (people.email[i1] == '.' && isalpha(people.email[i1-1]) && isalpha(people.email[i1+1]))// To Find . in Email Format
            {
                t = 1 ;
                break;
            }
            i1++;
        }
        if (t == 0)
        {
            printf ("The Email format is incorrect. Its correct form is as follows XXX@YY.ZZ . Please enter again :\n");
        }
        else if (t == 1)
        {
            break;
        }
    }

x2: printf("\n-Password : ");
    char temp2[50];
    scanf("%s", temp2);
    if (strlen(temp2) <8 )
    {
        printf ("Your password length is less than the limit. \n Please Try Again !");
        goto x2 ;
    }
    if (strcmp(people.username ,temp2) == 0 || strcmp(people.name ,temp2) == 0 || strcmp(people.lastname ,temp2) == 0 || strcmp(people.ncode ,temp2) == 0 || strcmp(people.phone ,temp2) == 0 || strcmp("00000000" ,temp2) == 0 || strcmp("12345678" ,temp2) == 0 || strcmp("11111111" ,temp2) == 0 || strcmp("12341234" ,temp2) == 0)
    {
        printf ("Your password is not acceptable. \n Please Try Again !");
        goto x2 ;
    }
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

        printf("\nYour attempts were too many.\n Please press a key to be redirected to the menu \n");
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
            if (admin == 2)
                setting(2);
            else
                setting(1);
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

        fprintf(houses, "1\n%d\n", property.area);
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
        fflush(stdin);
        system("cls");
        FILE *officess;
        officess = fopen("Office-Sell.txt","a");
        if (officess == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


    struct infos
    {
        int area;
        char address[150];
        char type[50];
        int old;
        int meterage;
        int floor;
        int total_meterage;
        char phone[12];
        int oroom;
        char cost[12];
    };

    struct infos offices;

    printf("\n-Municipal area (indicating the location of the office in the city): ");
    scanf("%d", &offices.area);

    getchar();
    printf("\n-Address: ");
    fgets(offices.address, sizeof(offices.address), stdin);

    printf("\n-Office type (Official administrative document, or just administrative position): ");
    fgets(offices.type, sizeof(offices.type), stdin);

    printf("\n-Age: ");
    scanf("%d", &offices.old);

    printf("\n-The size of the infrastructure: ");
    scanf("%d", &offices.meterage);

    printf("\n-Floor: ");
    scanf("%d", &offices.floor);

    printf("\n-The size of the main land of the Office: ");
    scanf("%d", &offices.total_meterage);

    printf("\n-Contact number of the owner: ");
    scanf("%s", &offices.phone);

    printf("\n-Number of Office rooms: ");
    scanf("%d", &offices.oroom);

    printf("\n-Sales price: ");
    scanf("%s", &offices.cost);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(officess, "1\n%d\n", offices.area);
    fprintf(officess, "%s", offices.address);
    fprintf(officess, "%s", offices.type);
    fprintf(officess , "%d\n%d\n%d\n", offices.old, offices.meterage, offices.floor);
    fprintf(officess, "%d\n%s\n%d\n%s\n", offices.total_meterage, offices.phone, offices.oroom, offices.cost);


    printf("\n\nThe Office has been successfully registered.\nPress the key to return to the user menu :");
    getch();
    fflush(stdin);
    fclose(officess);
    system("cls");
    if (admin == 2)
        menuuser(2);
    else
        menuuser(1);
    }
    if (a == '3')
    {
        fflush(stdin);
        system("cls");
        FILE *lands;
        lands = fopen("Land-Sell.txt","a");
        if (lands == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


    struct infls
    {
        int area;
        char address[150];
        char type[50];
        int meterage;
        char phone[12];
        char cost[12];
    };

    struct infls landss;

    printf("\n-Municipal area (indicating the location of the Land in the city): ");
    scanf("%d", &landss.area);

    getchar();
    printf("\n-Address: ");
    fgets(landss.address, sizeof(landss.address), stdin);

    printf("\n-Land type (agricultural or urban): ");
    fgets(landss.type, sizeof(landss.type), stdin);

    printf("\n-Size of land: ");
    scanf("%d", &landss.meterage);

    printf("\n-Contact number of the owner: ");
    scanf("%s", &landss.phone);

    printf("\n-Sales price: ");
    scanf("%s", &landss.cost);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(lands, "1\n%d\n", landss.area);
    fprintf(lands, "%s", landss.address);
    fprintf(lands, "%s", landss.type);
    fprintf(lands , "%d\n",landss.meterage);
    fprintf(lands, "%s\n%s\n", landss.phone, landss.cost);


    printf("\n\nThe Land has been successfully registered.\nPress the key to return to the user menu :");
    getch();
    fflush(stdin);
    fclose(lands);
    system("cls");
    if (admin == 2)
        menuuser(2);
    else
        menuuser(1);
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
    printf("1 - House registration\n2 - Office registration\n3 - Land registration\n4 - Return To The Previous Menu\n\n\n>Please Enter Your Choice: ");
    char a = getchar();
    if (a == '1')
    {
        fflush(stdin);
        system("cls");
        FILE *houser;
        houser = fopen("House-Rent.txt","a");
        if (houser == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


        struct infhr
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
            char amount[12];
            char mortgage[12];
        };

        struct infhr propertyr;

        printf("\n-Municipal area (indicating the location of the property in the city): ");
        scanf("%d", &propertyr.area);

        getchar();
        printf("\n-Address: ");
        fgets(propertyr.address, sizeof(propertyr.address), stdin);

        printf("\n-Property type (apartment or villa): ");
        scanf("%s", &propertyr.type);

        printf("\n-Age: ");
        scanf("%d", &propertyr.old);

        printf("\n-The size of the infrastructure: ");
        scanf("%d", &propertyr.meterage);

        printf("\n-Floor: ");
        scanf("%d", &propertyr.floor);

        printf("\n-The size of the main land of the property: ");
        scanf("%d", &propertyr.total_meterage);

        printf("\n-Contact number of the owner: ");
        scanf("%s", &propertyr.phone);

        printf("\n-Number of bedrooms: ");
        scanf("%d", &propertyr.bedroom);

        printf("\n-Home mortgage amount: ");
        scanf("%s", &propertyr.mortgage);

        printf("\n-The amount of monthly house rent: ");
        scanf("%s", &propertyr.amount);

        printf("\n\n Press the key to register : ");
        getch();
        fflush(stdin);

        fprintf(houser, "1\n%d\n", propertyr.area);
        fprintf(houser, "%s", propertyr.address);
        fprintf(houser, "%s", propertyr.type);
        fprintf(houser , "\n%d\n%d\n%d\n", propertyr.old, propertyr.meterage, propertyr.floor);
        fprintf(houser, "%d\n%s\n%d\n%s\n%s\n", propertyr.total_meterage, propertyr.phone, propertyr.bedroom, propertyr.amount , propertyr.mortgage);


        printf("\n\nThe property has been successfully registered.\nPress the key to return to the user menu :");
        getch();
        fflush(stdin);
        fclose(houser);
        system("cls");
        if (admin == 2)
            menuuser(2);
        else
            menuuser(1);
        }
    if (a == '2')
    {
        fflush(stdin);
        system("cls");
        FILE *officer;
        officer = fopen("Office-Rent.txt","a");
        if (officer == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


    struct infor
    {
        int area;
        char address[150];
        char type[50];
        int old;
        int meterage;
        int floor;
        int total_meterage;
        char phone[12];
        int oroom;
        char amount[12];
        char mortgage[12];
    };

    struct infor officerr;

    printf("\n-Municipal area (indicating the location of the office in the city): ");
    scanf("%d", &officerr.area);

    getchar();
    printf("\n-Address: ");
    fgets(officerr.address, sizeof(officerr.address), stdin);

    printf("\n-Office type (Official administrative document, or just administrative position): ");
    fgets(officerr.type, sizeof(officerr.type), stdin);

    printf("\n-Age: ");
    scanf("%d", &officerr.old);

    printf("\n-The size of the infrastructure: ");
    scanf("%d", &officerr.meterage);

    printf("\n-Floor: ");
    scanf("%d", &officerr.floor);

    printf("\n-The size of the main land of the Office: ");
    scanf("%d", &officerr.total_meterage);

    printf("\n-Contact number of the owner: ");
    scanf("%s", &officerr.phone);

    printf("\n-Number of Office rooms: ");
    scanf("%d", &officerr.oroom);

    printf("\n-Office mortgage amount: ");
    scanf("%s", &officerr.mortgage);

    printf("\n-The amount of monthly Office rent: ");
    scanf("%s", &officerr.amount);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(officer, "1\n%d\n", officerr.area);
    fprintf(officer, "%s", officerr.address);
    fprintf(officer, "%s", officerr.type);
    fprintf(officer , "%d\n%d\n%d\n", officerr.old, officerr.meterage, officerr.floor);
    fprintf(officer, "%d\n%s\n%d\n%s\n%s\n", officerr.total_meterage, officerr.phone, officerr.oroom, officerr.amount , officerr.mortgage);


    printf("\n\nThe Office has been successfully registered.\nPress the key to return to the user menu :");
    getch();
    fflush(stdin);
    fclose(officer);
    system("cls");
    if (admin == 2)
        menuuser(2);
    else
        menuuser(1);
    }
    if (a == '3')
    {
        fflush(stdin);
        system("cls");
        FILE *landr;
        landr = fopen("Land-Rent.txt","a");
        if (landr == NULL)
        {
            printf("Error opening file!\n");
            if (admin == 2)
                menuuser(2);
            else
                menuuser(1);
        }


    struct inflr
    {
        int area;
        char address[150];
        char type[50];
        int meterage;
        char phone[12];
        char amount[12];
        char mortgage[12];
    };

    struct inflr landrr;

    printf("\n-Municipal area (indicating the location of the Land in the city): ");
    scanf("%d", &landrr.area);

    getchar();
    printf("\n-Address: ");
    fgets(landrr.address, sizeof(landrr.address), stdin);

    printf("\n-Land type (agricultural or urban): ");
    fgets(landrr.type, sizeof(landrr.type), stdin);

    printf("\n-Size of land: ");
    scanf("%d", &landrr.meterage);

    printf("\n-Contact number of the owner: ");
    scanf("%s", &landrr.phone);

    printf("\n-Lend mortgage amount: ");
    scanf("%s", &landrr.mortgage);

    printf("\n-The amount of monthly Lend rent: ");
    scanf("%s", &landrr.amount);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(landr, "1\n%d\n", landrr.area);
    fprintf(landr, "%s", landrr.address);
    fprintf(landr, "%s", landrr.type);
    fprintf(landr , "%d\n",landrr.meterage);
    fprintf(landr, "%s\n%s\n%s\n", landrr.phone,landrr.amount, landrr.mortgage);


    printf("\n\nThe Land has been successfully registered.\nPress the key to return to the user menu :");
    getch();
    fflush(stdin);
    fclose(landr);
    system("cls");
    if (admin == 2)
        menuuser(2);
    else
        menuuser(1);
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
void setting(int admin)
{
    fflush(stdin);
    system("cls");
    printf ("Setting for %s Account : \n" , current->username);
    printf ("\nPress button 1 to edit the Name (%s) . "  ,current->name);
    printf ("\nPress button 2 to edit the Last Name (%s) ." , current->family_name);
    printf ("\nPress button 3 to edit the National Code (%s) ." , current->ncode);
    printf ("\nPress button 4 to edit the Phone Number (%s) ." , current->numberphone);
    printf ("\nPress button 5 to edit the Email (%s) ." , current->email);
    printf ("\nPress button 6 to edit the Password (%s) ." , current->password);
    printf ("\n - Press button 0 to return to the Previous Menu\n\n\n>Please Enter Your Choice: ");
    char temp ,replace[60];
    temp = getchar();
    switch (temp)
    {
        case '1':
            fflush(stdin);
            system("cls");
            printf ("Current Name : %s \nNew Name : ",current->name);
            current->name[0]='\0';
            while (1)
            {
                if (scanf(" %[^\n]", replace) != 1)
                {
                    // Handle invalid input (non-alphabetic characters)
                    printf("Invalid input. Please enter a name using only alphabetical characters: ");
                    while (getchar() != '\n');  // Clear input buffer
                }
                else
                {
                    int isValid = 1;

                    // Check if all characters are alphabetic
                    for (size_t i = 0; i < strlen(replace); ++i)
                    {
                        if (!isalpha(replace[i]))
                        {
                            isValid = 0;
                            break;
                        }
                    }

                    if (isValid)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid input. Please enter a name using only alphabetical characters: ");
                    }
                }
            }
            strcpy(current->name, replace );
            edit(admin);
            break;
        case '2':
            fflush(stdin);
            system("cls");
            printf ("Current Last Name : %s \nNew Last Name : ",current->family_name);
            current->family_name[0]='\0';
                        while (1)
            {
                if (scanf(" %[^\n]", replace) != 1)
                {
                    // Handle invalid input (non-alphabetic characters)
                    printf("Invalid input. Please enter a Last name using only alphabetical characters: ");
                    while (getchar() != '\n');  // Clear input buffer
                }
                else
                {
                    int isValid = 1;

                    // Check if all characters are alphabetic
                    for (size_t i = 0; i < strlen(replace); ++i)
                    {
                        if (!isalpha(replace[i]))
                        {
                            isValid = 0;
                            break;
                        }
                    }

                    if (isValid)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid input. Please enter a Last name using only alphabetical characters: ");
                    }
                }
            }
            strcpy(current->family_name, replace );
            edit(admin);
            break;
        case '3':
            fflush(stdin);
            system("cls");
            printf ("Current National Code : %s \nNew National Code : ",current->ncode);
            current->ncode[0]='\0';
            while (1)
            {
                if (scanf("%s", replace) != 1)
                {
                    // Handle invalid input (non-numeric characters)
                    printf("Invalid input. Please enter a numeric 10-digit national code: ");
                    while (getchar() != '\n');  // Clear input buffer
                }
                else
                {
                    int isValid = 1;

                    // Check if all characters are digits
                    for (size_t i = 0; i < strlen(replace); ++i)
                    {
                        if (!isdigit(replace[i]))
                        {
                            isValid = 0;
                            break;
                        }
                    }

                    if (isValid && strlen(replace) == 10)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid input. Please enter a numeric 10-digit national code: ");
                    }
                }
            }
            strcpy(current->ncode, replace );
            edit(admin);
            break;
        case '4':
            fflush(stdin);
            system("cls");
            printf ("Current Phone Number : %s \nNew Phone Number : ",current->numberphone);
            current->numberphone[0]='\0';
            while (1)
            {
                if (scanf("%s", replace) != 1)
                {
                    // Handle invalid input (non-numeric characters)
                    printf("Invalid input. Please enter a numeric 10-digit phone number starting with 09: ");
                    while (getchar() != '\n');  // Clear input buffer
                }
                else
                {
                    int isValid = 1;

                    // Check if the entered phone number starts with '09'
                    if (strncmp(replace, "09", 2) != 0)
                    {
                        isValid = 0;
                    }

                    // Check if all characters are digits
                    for (size_t i = 2; i < strlen(replace); ++i)
                    {
                        if (!isdigit(replace[i]))
                        {
                            isValid = 0;
                            break;
                        }
                    }

                    if (isValid && strlen(replace) == 11)
                    {
                        break;
                    }
                    else
                    {
                        printf("Invalid input. Please enter a numeric 11-digit phone number starting with 09: ");
                    }
                }
            }
            fflush(stdin);
            strcpy(current->numberphone, replace );
            edit(admin);
            break;
        case '5':
            fflush(stdin);
            system("cls");
            printf ("Current Email : %s \nNew Email : ",current->email);
            current->email[0]='\0';
            fflush(stdin);
            int  i1 =0 , t = 0 ;
            while(1)
            {
                fflush(stdin);
                gets(replace);
                fflush(stdin);
                while (replace[i1] != '\0')
                {
                    if (replace [i1] == '@' && (isalpha(replace[i1-1]) || isdigit(replace[i1-1])) )//Find @ in Email Format
                    {
                        i1++;
                        break;
                    }
                    i1++ ;
                }
                while (replace[i1] != '\0')
                {
                    if (replace[i1] == '.' && isalpha(replace[i1-1]) && isalpha(replace[i1+1]))// To Find . in Email Format
                    {
                        t = 1 ;
                        break;
                    }
                    i1++;
                }
                if (t == 0)
                {
                    printf ("The Email format is incorrect. Its correct form is as follows XXX@YY.ZZ . Please enter again :\n");
                }
                else if (t == 1)
                {
                    break;
                }
            }
            strcpy(current->email, replace );
            edit(admin);
            break;
        case '6':
            fflush(stdin);
            system("cls");
            char inp[50];
            printf ("Current Password : %s",current->password);
e1:         printf(" \nNew Password : ");
            scanf("%s", replace);
            if (strlen(replace) <8 )
            {
                printf ("Your password length is less than the limit. \n Please Try Again !");
                goto e1 ;
            }
            if (strcmp(current->username ,replace) == 0 || strcmp(current->name ,replace) == 0 || strcmp(current->family_name ,replace) == 0 || strcmp(current->ncode ,replace) == 0 || strcmp(current->numberphone ,replace) == 0 || strcmp("00000000" ,replace) == 0 || strcmp("12345678" ,replace) == 0 || strcmp("11111111" ,replace) == 0 || strcmp("12341234" ,replace) == 0)
            {
                printf ("Your password is not acceptable. \n Please Try Again !");
                goto e1 ;
            }
            printf("\n-Repeat The Password Again: ");
            scanf("%s",inp);
            if(strcmp(inp ,replace) != 0)
            {
                printf("\nPasswords are not the Same !\n");
                goto e1;
            }
            else
            {
                current->password[0]='\0';
                strcpy(current->password, replace );
                edit(admin);
                break;
            }
        case '0':
            fflush(stdin);
            system("cls");
            if (admin == 2)
            {
                menuuser(2);
            }
            else
            {
                menuuser(1);
            }
            break;
        default :
            fflush(stdin);
            system("cls");
            if (admin == 2)
                setting(2);
            else
                setting(1);
            break;

    }
}
void edit(int admin)
{
    FILE *f;
    f = fopen("Informations of Users.txt","w");
    char user[50] ;
    strcpy(user ,current->username );
    current = head;
    while(current!=NULL)
    {
        fprintf(f,"%s\n",current->username);
        fprintf(f,"%s\n",current->name);
        fprintf(f,"%s\n",current->family_name);
        fprintf(f,"%s\n",current->ncode);
        fprintf(f,"%s\n",current->numberphone);
        fprintf(f,"%s\n",current->email);
        fprintf(f,"%s\n",current->password);
        getchar();

        current = current->next ;
    }
    fclose (f);
    printf("The Edit Was Successful !\n Press a key to return to the User account settings.");
    getchar();
    fflush(stdin);
    system("cls");
    current = head;
    while(1)
    {
        if (strcmp(current->username, user) == 0 )
        {
            if (admin == 2)
                setting(2);
            else
                setting(1);
            break;
        }
            current = current->next;
    }

}
void reports()
{

}

