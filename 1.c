#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>


struct user
{
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



struct hs {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[20];
    int old;
    int meterage;
    int floor;
    int total_meterage;
    char phone[12];
    int bedroom;
    int cost;
    int year;
    int month;
    int day;
    char writer[50];
    struct hs *hsnext;
};

typedef struct hs housesell;

struct os {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[150];
    int old;
    int meterage;
    int floor;
    int total_meterage;
    char phone[12];
    int officeroom;
    int cost;
    int year;
    int month;
    int day;
    char writer[50];
    struct os *osnext;
};

typedef struct os officesell;

struct ls {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[150];
    int meterage;
    char phone[12];
    int cost;
    int year;
    int month;
    int day;
    char writer[50];
    struct ls *lsnext;
};

typedef struct ls landsell;

struct hr {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[150];
    int old;
    int meterage;
    int floor;
    int total_meterage;
    char phone[12];
    int bedroom;
    int amount;
    int mortgage;
    int year;
    int month;
    int day;
    char writer[50];
    struct hr *hrnext;
};

typedef struct hr houserent;

struct or {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[150];
    int old;
    int meterage;
    int floor;
    int total_meterage;
    char phone[12];
    int officeroom;
    int amount;
    int mortgage;
    int year;
    int month;
    int day;
    char writer[50];
    struct or *ornext;
};

typedef struct or officerent;

struct lr {
    int active;
    int area;  // Increase the size to accommodate larger areas
    char address[150];
    char type[150];
    int meterage;
    char phone[12];
    int amount;
    int mortgage;
    int year;
    int month;
    int day;
    char writer[50];
    struct lr *lrnext;
};

typedef struct lr landrent;


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
void adminreports(void);
void settingmelk();
int tr = 0 ;


void main (void)
{
    menu();
}
void menu(void)
{
    tr++;
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
        t = 0 ;
        i1 = 0 ;
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
    if (tr==2 || tr == 1)
    {

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
    }
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
    if (i == 1 || j == 1)
    {

        printf("\nYour attempts were too many.\n Please press a key to be redirected to the menu \n");
        getch();
        fflush(stdin);
        system("cls");
        menu();

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
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '3':
            fflush(stdin);
            system("cls");
            if (admin == 2)
                adminreports();
            else
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
        houses = fopen("House-Sell.txt","a");
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
            int year;
            int month;
            int day;
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

        printf("\nToday's Date:\n\n -Year: ");
        scanf("%d", &property.year);

        printf("\n-Month: ");
        scanf("%d", &property.month);

        printf("\n-Day: ");
        scanf("%d", &property.day);

        printf("\n-Sales price: ");
        scanf("%s", &property.cost);

        printf("\n\n Press the key to register : ");
        getch();
        fflush(stdin);

        fprintf(houses, "\n1\n%d\n", property.area);
        fprintf(houses, "%s", property.address);
        fprintf(houses, "%s", property.type);
        fprintf(houses , "\n%d\n%d\n%d\n", property.old, property.meterage, property.floor);
        fprintf(houses, "%d\n%s\n%d\n%d\n%d\n%d\n%s\n%s", property.total_meterage, property.phone, property.bedroom,property.year,property.month,property.day, property.cost,current->username);


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
        int year;
        int month;
        int day;
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

    printf("\nToday's Date:\n\n -Year: ");
    scanf("%d", &offices.year);

    printf("\n-Month: ");
    scanf("%d", &offices.month);

    printf("\n-Day: ");
    scanf("%d", &offices.day);

    printf("\n-Sales price: ");
    scanf("%s", &offices.cost);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(officess, "\n1\n%d\n", offices.area);
    fprintf(officess, "%s", offices.address);
    fprintf(officess, "%s", offices.type);
    fprintf(officess , "%d\n%d\n%d\n", offices.old, offices.meterage, offices.floor);
    fprintf(officess, "%d\n%s\n%d\n%d\n%d\n%d\n%s\n%s", offices.total_meterage, offices.phone, offices.oroom,offices.year,offices.month,offices.day, offices.cost,current->username);


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
        int year;
        int month;
        int day;
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

    printf("\nToday's Date:\n\n -Year: ");
    scanf("%d", &landss.year);

    printf("\n-Month: ");
    scanf("%d", &landss.month);

    printf("\n-Day: ");
    scanf("%d", &landss.day);

    printf("\n-Sales price: ");
    scanf("%s", &landss.cost);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(lands, "\n1\n%d\n", landss.area);
    fprintf(lands, "%s", landss.address);
    fprintf(lands, "%s", landss.type);
    fprintf(lands , "%d\n",landss.meterage);
    fprintf(lands, "%s\n%d\n%d\n%d\n%s\n%s", landss.phone,landss.year,landss.month,landss.day, landss.cost,current->username);


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
            int year;
            int month;
            int day;
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

        printf("\nToday's Date:\n\n -Year: ");
        scanf("%d", &propertyr.year);

        printf("\n-Month: ");
        scanf("%d", &propertyr.month);

        printf("\n-Day: ");
        scanf("%d", &propertyr.day);

        printf("\n-Home mortgage amount: ");
        scanf("%s", &propertyr.mortgage);

        printf("\n-The amount of monthly house rent: ");
        scanf("%s", &propertyr.amount);

        printf("\n\n Press the key to register : ");
        getch();
        fflush(stdin);

        fprintf(houser, "\n1\n%d\n", propertyr.area);
        fprintf(houser, "%s", propertyr.address);
        fprintf(houser, "%s", propertyr.type);
        fprintf(houser , "\n%d\n%d\n%d\n", propertyr.old, propertyr.meterage, propertyr.floor);
        fprintf(houser, "%d\n%s\n%d\n%d\n%d\n%d\n%s\n%s\n%s", propertyr.total_meterage, propertyr.phone, propertyr.bedroom,propertyr.year,propertyr.month,propertyr.day, propertyr.amount , propertyr.mortgage,current->username);


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
        int year;
        int month;
        int day;
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

    printf("\nToday's Date:\n\n -Year: ");
    scanf("%d", &officerr.year);

    printf("\n-Month: ");
    scanf("%d", &officerr.month);

    printf("\n-Day: ");
    scanf("%d", &officerr.day);

    printf("\n-Office mortgage amount: ");
    scanf("%s", &officerr.mortgage);

    printf("\n-The amount of monthly Office rent: ");
    scanf("%s", &officerr.amount);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(officer, "\n1\n%d\n", officerr.area);
    fprintf(officer, "%s", officerr.address);
    fprintf(officer, "%s", officerr.type);
    fprintf(officer , "%d\n%d\n%d\n", officerr.old, officerr.meterage, officerr.floor);
    fprintf(officer, "%d\n%s\n%d\n%d\n%d\n%d\n%s\n%s\n%s", officerr.total_meterage, officerr.phone, officerr.oroom,officerr.year,officerr.month,officerr.day, officerr.amount , officerr.mortgage,current->username);


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
        int year;
        int month;
        int day;
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

    printf("\nToday's Date:\n\n -Year: ");
    scanf("%d", &landrr.year);

    printf("\n-Month: ");
    scanf("%d", &landrr.month);

    printf("\n-Day: ");
    scanf("%d", &landrr.day);

    printf("\n-Lend mortgage amount: ");
    scanf("%s", &landrr.mortgage);

    printf("\n-The amount of monthly Lend rent: ");
    scanf("%s", &landrr.amount);

    printf("\n\n Press the key to register : ");
    getch();
    fflush(stdin);

    fprintf(landr, "\n1\n%d\n", landrr.area);
    fprintf(landr, "%s", landrr.address);
    fprintf(landr, "%s", landrr.type);
    fprintf(landr , "%d\n",landrr.meterage);
    fprintf(landr, "%s\n%d\n%d\n%d\n%s\n%s\n%s", landrr.phone,landrr.year,landrr.month,landrr.day,landrr.amount, landrr.mortgage,current->username);


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
    int cont = 0 ;
    while(current!=NULL)
    {
        if(cont==0)
        {
            fprintf(f,"%s\n",current->username);
            cont++;
        }
        else
        {
           fprintf(f,"\n%s\n",current->username);
        }
        fprintf(f,"%s\n",current->name);
        fprintf(f,"%s\n",current->family_name);
        fprintf(f,"%s\n",current->ncode);
        fprintf(f,"%s\n",current->numberphone);
        fprintf(f,"%s\n",current->email);
        fprintf(f,"%s",current->password);

        current = current->next ;
    }
    fclose (f);
    printf("\n\nThe Edit Was Successful !\n Press a key to return to the User account settings.");
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
    char counter[6] = {0};


    housesell *p = NULL, *q = NULL;
    FILE *fp;

    fp = fopen("House-Sell.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char line[256]; // Assuming a maximum line length of 255 characters

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        housesell *d = malloc(sizeof(housesell));

        sscanf(line, "%d", &d->active);
        fgets(line, sizeof(line), fp); // Read the area line
        sscanf(line, "%d", &d->area);
        fgets(line, sizeof(line), fp); // Read the address line
        sscanf(line, "%[^\n]", d->address);
        fgets(line, sizeof(line), fp); // Read the type line
        sscanf(line, "%s", d->type);
        fgets(line, sizeof(line), fp); // Read the old line
        sscanf(line, "%d", &d->old);
        fgets(line, sizeof(line), fp); // Read the meterage line
        sscanf(line, "%d", &d->meterage);
        fgets(line, sizeof(line), fp); // Read the floor line
        sscanf(line, "%d", &d->floor);
        fgets(line, sizeof(line), fp); // Read the total_meterage line
        sscanf(line, "%d", &d->total_meterage);
        fgets(line, sizeof(line), fp); // Read the phone line
        sscanf(line, "%s", d->phone);
        fgets(line, sizeof(line), fp); // Read the bedroom line
        sscanf(line, "%d", &d->bedroom);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%d", &d->year);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->month);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->day);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->cost);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%s", &d->writer);


        d->hsnext = NULL;

        if (p == NULL)
        {
            p = d;
            q = p;
        }
        else
        {
            q->hsnext = d;
            q = d;
        }
    }

    fclose(fp);

    housesell *d = p;
    int temp =0;
    while (d != NULL)
    {
        temp++;
        if (d->active == 1)
        {
            counter[0] ++;
        }

        d = d->hsnext;
    }



    officesell *pos = NULL, *qos = NULL;
    FILE *fpos;

    fpos = fopen("Office-Sell.txt", "r");

    if (fpos == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineos[256]; // Assuming a maximum line length of 255 characters
    while (fgets(lineos, sizeof(lineos), fpos) != NULL)
    {
        officesell *dos = malloc(sizeof(officesell));

        sscanf(lineos, "%d", &dos->active);
        fgets(lineos, sizeof(lineos), fpos); // Read the area line
        sscanf(lineos, "%d", &dos->area);
        fgets(lineos, sizeof(lineos), fpos); // Read the address line
        sscanf(lineos, "%[^\n]", dos->address);
        fgets(lineos, sizeof(lineos), fpos); // Read the type line
        sscanf(lineos, "%[^\n]", dos->type);
        fgets(lineos, sizeof(lineos), fpos); // Read the old line
        sscanf(lineos, "%d", &dos->old);
        fgets(line, sizeof(lineos), fpos); // Read the meterage line
        sscanf(line, "%d", &dos->meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the floor line
        sscanf(lineos, "%d", &dos->floor);
        fgets(lineos, sizeof(lineos), fpos); // Read the total_meterage line
        sscanf(lineos, "%d", &dos->total_meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the phone line
        sscanf(lineos, "%s", dos->phone);
        fgets(lineos, sizeof(lineos), fpos); // Read the bedroom line
        sscanf(lineos, "%d", &dos->officeroom);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%d", &dos->year);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->month);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->day);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->cost);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%s", &dos->writer);


        dos->osnext = NULL;

        if (pos == NULL)
        {
            pos = dos;
            qos = pos;
        }
        else
        {
            qos->osnext = dos;
            qos = dos;
        }
    }

    fclose(fpos);

    officesell *dos = pos;
    temp =0;
    while (dos != NULL)
    {
        temp++;
        if (dos->active == 1)
        {
            counter[1] ++;
        }

        dos = dos->osnext;
    }





    landsell *pls = NULL, *qls = NULL;
    FILE *fpls;

    fpls = fopen("Land-Sell.txt", "r");

    if (fpls == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linels[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linels, sizeof(line), fpls) != NULL)
    {
        landsell *dls = malloc(sizeof(landsell));

        sscanf(linels, "%d", &dls->active);
        fgets(linels, sizeof(linels), fpls); // Read the area line
        sscanf(linels, "%d", &dls->area);
        fgets(linels, sizeof(linels), fpls); // Read the address line
        sscanf(linels, "%[^\n]", dls->address);
        fgets(linels, sizeof(linels), fpls); // Read the type line
        sscanf(linels, "%s", dls->type);
        fgets(linels, sizeof(linels), fpls); // Read the meterage line
        sscanf(linels, "%d", &dls->meterage);
        fgets(linels, sizeof(linels), fpls); // Read the phone line
        sscanf(linels, "%s", dls->phone);
        fgets(linels, sizeof(linels), fpls); // Read the cost line
        sscanf(linels, "%d", &dls->year);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->month);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->day);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->cost);
        fgets(linels, sizeof(linels), fpls); // Read the Writer
        sscanf(linels, "%s", &dls->writer);


        dls->lsnext = NULL;

        if (pls == NULL)
        {
            pls = dls;
            qls = pls;
        }
        else
        {
            qls->lsnext = dls;
            qls = dls;
        }
    }

    fclose(fpls);

    landsell *dls = pls;
    temp =0;
    while (dls != NULL)
    {
        temp++;
        if (dls->active == 1)
        {
            counter[2] ++;
        }

        dls = dls->lsnext;
    }




    houserent *phr = NULL, *qhr = NULL;
    FILE *fphr;

    fphr = fopen("House-Rent.txt", "r");

    if (fphr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linehr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linehr, sizeof(linehr), fphr) != NULL)
    {
        houserent *dhr = malloc(sizeof(houserent));

        sscanf(linehr, "%d", &dhr->active);
        fgets(linehr, sizeof(linehr), fphr); // Read the area line
        sscanf(linehr, "%d", &dhr->area);
        fgets(linehr, sizeof(linehr), fphr); // Read the address line
        sscanf(linehr, "%[^\n]", dhr->address);
        fgets(linehr, sizeof(linehr), fphr); // Read the type line
        sscanf(linehr, "%s", dhr->type);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->floor);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->old);
        fgets(linehr, sizeof(linehr), fphr); // Read the floor line
        sscanf(linehr, "%d", &dhr->total_meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the phone line
        sscanf(linehr, "%s", dhr->phone);
        fgets(linehr, sizeof(linehr), fphr); // Read the bedroom line
        sscanf(linehr, "%d", &dhr->bedroom);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->year);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->month);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->day);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->amount);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->mortgage);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%s", &dhr->writer);


        dhr->hrnext = NULL;

        if (phr == NULL)
        {
            phr = dhr;
            qhr = phr;
        }
        else
        {
            qhr->hrnext = dhr;
            qhr = dhr;
        }
    }

    fclose(fphr);
    houserent *dhr = phr;
    temp =0;
    while (dhr != NULL)
    {
        temp++;
        if (dhr->active == 1)
        {
            counter[3] ++;
        }

        dhr = dhr->hrnext;

    }




    officerent *por = NULL, *qor = NULL;
    FILE *fpor;

    fpor = fopen("Office-Rent.txt", "r");

    if (fpor == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineor[256]; // Assuming a maximum line length of 255 characters


    while (fgets(lineor, sizeof(lineor), fpor) != NULL)
    {
        officerent *dor = malloc(sizeof(officerent));

        sscanf(lineor, "%d", &dor->active);
        fgets(lineor, sizeof(lineor), fpor); // Read the area line
        sscanf(lineor, "%d", &dor->area);
        fgets(lineor, sizeof(lineor), fpor); // Read the address line
        sscanf(lineor, "%[^\n]", dor->address);
        fgets(lineor, sizeof(lineor), fpor); // Read the type line
        sscanf(lineor, "%[^\n]", dor->type);
        fgets(lineor, sizeof(lineor), fpor); // Read the old line
        sscanf(lineor, "%d", &dor->old);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->meterage);
        fgets(lineor, sizeof(lineor), fpor); // Read the meterage line
        sscanf(lineor, "%d", &dor->floor);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->total_meterage);
        fgets(lineor, sizeof(lineor), fp); // Read the phone line
        sscanf(lineor, "%s", dor->phone);
        fgets(lineor, sizeof(lineor), fpor); // Read the bedroom line
        sscanf(lineor, "%d", &dor->officeroom);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->year);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->month);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->day);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->amount);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->mortgage);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%s", &dor->writer);


        dor->ornext = NULL;

        if (por == NULL)
        {
            por = dor;
            qor = por;
        }
        else
        {
            qor->ornext = dor;
            qor = dor;
        }
    }

    fclose(fpor);
    officerent *dor = por;
    temp =0;
    while (dor != NULL)
    {
        temp++;
        if (dor->active == 1)
        {
            counter[4] ++;
        }

        dor = dor->ornext;

    }

    landrent *plr = NULL, *qlr = NULL;
    FILE *fplr;

    fplr = fopen("Land-Rent.txt", "r");

    if (fplr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linelr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linelr, sizeof(linelr), fplr) != NULL)
    {
        landrent *dlr = malloc(sizeof(landrent));

        sscanf(linelr, "%d", &dlr->active);
        fgets(linelr, sizeof(linelr), fplr); // Read the area line
        sscanf(linelr, "%d", &dlr->area);
        fgets(linelr, sizeof(linelr), fplr); // Read the address line
        sscanf(linelr, "%[^\n]", dlr->address);
        fgets(linelr, sizeof(linelr), fplr); // Read the type line
        sscanf(linelr, "%s", dlr->type);
        fgets(linelr, sizeof(linelr), fplr); // Read the meterage line
        sscanf(linelr, "%d", &dlr->meterage);
        fgets(linelr, sizeof(linelr), fplr); // Read the phone line
        sscanf(linelr, "%s", dlr->phone);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->year);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->month);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->day);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->amount);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%d", &dlr->mortgage);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%s", &dlr->writer);


        dlr->lrnext = NULL;

        if (plr == NULL)
        {
            plr = dlr;
            qlr = plr;
        }
        else
        {
            qlr->lrnext = dlr;
            qlr = dlr;
        }
    }

    fclose(fplr);

    landrent *dlr = plr;
    temp =0;
    while (dlr != NULL)
    {
        temp++;
        if (dlr->active == 1)
        {
            counter[5] ++;
        }

        dlr = dlr->lrnext;
    }

    fflush(stdin);
    system("cls");
    printf("1 - The number of properties in the archives\n\n2 - List of properties available in a specific municipal area\n\n3 - List of properties with specific building age\n\n4 - List of properties with specific infrastructure size\n\n5 - List of all residential properties with specific number of bedrooms\n\n6 - List of properties with a certain price\n\n7 - List of rental properties with specific limits for mortgage and rent\n\n8 - List of all apartments available in a particular floor\n\n0 - Return To The Previous Menu\n\n\n>Please Enter Your Choice: ");
    temp = getchar();
    int min , max ,tmp , min1 , max1;

    switch(temp)
    {
        case '1':
            fflush(stdin);
            system("cls");
            printf ("Number of Houses for Sale : %d  \n",counter[0]);
            printf ("Number of Offices for Sale : %d  \n",counter[1]);
            printf ("Number of Lands for Sale : %d  \n",counter[2]);
            printf ("Number of houses for Rent : %d  \n",counter[3]);
            printf ("Number of Offices for Rent : %d  \n",counter[4]);
            printf ("Number of Lands for Rent : %d  \n",counter[5]);
            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            reports();
            break;

        case '2':
            fflush(stdin);
            system("cls");
            printf ("Which municipal area do you want? Please enter it (area 1 to 5) : \n\n");
            int temp2;
            scanf("%d",&temp2);

            fflush(stdin);
            system("cls");

            printf("All Property in Municipal area %d: \n\n\n",temp2);

            int c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale in municipal area %d: \n",temp2);

            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\nNo houses were found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nOffices for sale in municipal area %d: \n",temp2);
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n%d\n", dos->cost);

                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nLands for sale in municipal area %d: \n",temp2);
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }

            if (c == 0)
            {
                printf("\nNo land was found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nHouses for Rent in municipal area %d: \n",temp2);
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\nNo Houses were found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nOffice for Rent in municipal area %d: \n",temp2);
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nLand for Rent in municipal area %d: \n",temp2);
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1 && dlr->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }

            if (c == 0)
            {
                printf("\nNo land was found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            reports();


        case '3':
            system("cls");
            printf(" - List of properties with specific building age :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d to %d old: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->old <= max && d->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->old <= max && dos->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->old <= max && dhr->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->old <= max && dor->old >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            reports();
            break;
        case '4':
            system("cls");
            printf(" - List of properties with specific meterage :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d to %d meterage: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->meterage <= max && d->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->meterage <= max && dos->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for sale : \n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->meterage <= max && dls->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->meterage <= max && dhr->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->meterage <= max && dor->meterage >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for Rent : \n");
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1 && dlr->meterage <= max && dlr->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            reports();
            break;

        case '5':

            system("cls");
            printf(" - List of properties with specific number of Room (bedroom and office room) :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d  to %d Rooms: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->bedroom <= max && d->bedroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->officeroom <= max && dos->officeroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->bedroom <= max && dhr->bedroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->officeroom <= max && dor->officeroom >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            reports();
            break;

        case '6':
            system("cls");
            printf(" - List of properties with specific cost :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d Rial to %d Rial cost: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->cost <= max && d->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->cost <= max && dos->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for sale : \n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->cost <= max && dls->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            reports();
            break;



         case '7':
            system("cls");
            printf(" - List of properties with specific Monthly Rent & Mortgage :\n\n");
            printf ("Enter a range for Monthly Rent :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }


            printf ("\nEnter a range for Mortgage :\n");
            scanf("%d",&min1);
            printf ("to \n");
            scanf("%d",&max1);
            if (min1>max1)
            {
                tmp = max1 ;
                max1 = min1 ;
                min1 = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d Rial to %d Rial Monthly Rent & %d Rial to %d Rial Mortgage: \n\n\n",min , max ,min1 , max1);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->amount <= max && dhr->amount >= min && dhr->mortgage <= max1 && dhr->mortgage >= min1)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1  && dor->amount <= max && dor->amount >= min && dor->mortgage <= max1 && dor->mortgage >= min1)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for Rent : \n");
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1  && dlr->amount <= max && dlr->amount >= min  && dlr->mortgage <= max1 && dlr->mortgage >= min1 )
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for Rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            reports();
            break;

        case '8':

            system("cls");
            printf(" - List of properties with specific number of Floor :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d  to %d Floor: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->floor <= max && d->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->floor <= max && dos->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->floor <= max && dhr->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->floor <= max && dor->floor >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            reports();
            break;

        case '0':
            fflush(stdin);
            system("cls");
            menuuser(1);
            break;
        default :
            fflush(stdin);
            system("cls");
            reports();
            break;





















    }

    d = p ;
    while (p != NULL)
    {
    housesell *temp = p;
    p = p->hsnext;
    free(temp);
    }

    dos = pos ;
    while (pos != NULL)
    {
    officesell *temp = pos;
    pos = pos->osnext;
    free(temp);
    }

    dls = pls ;
    while (pls != NULL)
    {
    landsell *temp = pls;
    pls = pls->lsnext;
    free(temp);
    }

    dhr = phr ;
    while (phr != NULL)
    {
    houserent *temp = phr;
    phr = phr->hrnext;
    free(temp);
    }

    dor = por ;
    while (por != NULL)
    {
    officerent *temp = por;
    por = por->ornext;
    free(temp);
    }

    dlr = plr ;
    while (plr != NULL)
    {
    landrent *temp = plr;
    plr = plr->lrnext;
    free(temp);
    }
    getchar();
    menuuser(1);


}
void adminreports()
{
   char counter[6] = {0};


    housesell *p = NULL, *q = NULL;
    FILE *fp;

    fp = fopen("House-Sell.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char line[256]; // Assuming a maximum line length of 255 characters

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        housesell *d = malloc(sizeof(housesell));

        sscanf(line, "%d", &d->active);
        fgets(line, sizeof(line), fp); // Read the area line
        sscanf(line, "%d", &d->area);
        fgets(line, sizeof(line), fp); // Read the address line
        sscanf(line, "%[^\n]", d->address);
        fgets(line, sizeof(line), fp); // Read the type line
        sscanf(line, "%s", d->type);
        fgets(line, sizeof(line), fp); // Read the old line
        sscanf(line, "%d", &d->old);
        fgets(line, sizeof(line), fp); // Read the meterage line
        sscanf(line, "%d", &d->meterage);
        fgets(line, sizeof(line), fp); // Read the floor line
        sscanf(line, "%d", &d->floor);
        fgets(line, sizeof(line), fp); // Read the total_meterage line
        sscanf(line, "%d", &d->total_meterage);
        fgets(line, sizeof(line), fp); // Read the phone line
        sscanf(line, "%s", d->phone);
        fgets(line, sizeof(line), fp); // Read the bedroom line
        sscanf(line, "%d", &d->bedroom);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%d", &d->year);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->month);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->day);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->cost);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%s", &d->writer);


        d->hsnext = NULL;

        if (p == NULL)
        {
            p = d;
            q = p;
        }
        else
        {
            q->hsnext = d;
            q = d;
        }
    }

    fclose(fp);

    housesell *d = p;
    int temp =0;
    while (d != NULL)
    {
        temp++;
        if (d->active == 1)
        {
            counter[0] ++;
        }

        d = d->hsnext;
    }



    officesell *pos = NULL, *qos = NULL;
    FILE *fpos;

    fpos = fopen("Office-Sell.txt", "r");

    if (fpos == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineos[256]; // Assuming a maximum line length of 255 characters
    while (fgets(lineos, sizeof(lineos), fpos) != NULL)
    {
        officesell *dos = malloc(sizeof(officesell));

        sscanf(lineos, "%d", &dos->active);
        fgets(lineos, sizeof(lineos), fpos); // Read the area line
        sscanf(lineos, "%d", &dos->area);
        fgets(lineos, sizeof(lineos), fpos); // Read the address line
        sscanf(lineos, "%[^\n]", dos->address);
        fgets(lineos, sizeof(lineos), fpos); // Read the type line
        sscanf(lineos, "%[^\n]", dos->type);
        fgets(lineos, sizeof(lineos), fpos); // Read the old line
        sscanf(lineos, "%d", &dos->old);
        fgets(line, sizeof(lineos), fpos); // Read the meterage line
        sscanf(line, "%d", &dos->meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the floor line
        sscanf(lineos, "%d", &dos->floor);
        fgets(lineos, sizeof(lineos), fpos); // Read the total_meterage line
        sscanf(lineos, "%d", &dos->total_meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the phone line
        sscanf(lineos, "%s", dos->phone);
        fgets(lineos, sizeof(lineos), fpos); // Read the bedroom line
        sscanf(lineos, "%d", &dos->officeroom);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%d", &dos->year);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->month);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->day);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->cost);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%s", &dos->writer);


        dos->osnext = NULL;

        if (pos == NULL)
        {
            pos = dos;
            qos = pos;
        }
        else
        {
            qos->osnext = dos;
            qos = dos;
        }
    }

    fclose(fpos);

    officesell *dos = pos;
    temp =0;
    while (dos != NULL)
    {
        temp++;
        if (dos->active == 1)
        {
            counter[1] ++;
        }

        dos = dos->osnext;
    }





    landsell *pls = NULL, *qls = NULL;
    FILE *fpls;

    fpls = fopen("Land-Sell.txt", "r");

    if (fpls == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linels[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linels, sizeof(line), fpls) != NULL)
    {
        landsell *dls = malloc(sizeof(landsell));

        sscanf(linels, "%d", &dls->active);
        fgets(linels, sizeof(linels), fpls); // Read the area line
        sscanf(linels, "%d", &dls->area);
        fgets(linels, sizeof(linels), fpls); // Read the address line
        sscanf(linels, "%[^\n]", dls->address);
        fgets(linels, sizeof(linels), fpls); // Read the type line
        sscanf(linels, "%s", dls->type);
        fgets(linels, sizeof(linels), fpls); // Read the meterage line
        sscanf(linels, "%d", &dls->meterage);
        fgets(linels, sizeof(linels), fpls); // Read the phone line
        sscanf(linels, "%s", dls->phone);
        fgets(linels, sizeof(linels), fpls); // Read the cost line
        sscanf(linels, "%d", &dls->year);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->month);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->day);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->cost);
        fgets(linels, sizeof(linels), fpls); // Read the Writer
        sscanf(linels, "%s", &dls->writer);


        dls->lsnext = NULL;

        if (pls == NULL)
        {
            pls = dls;
            qls = pls;
        }
        else
        {
            qls->lsnext = dls;
            qls = dls;
        }
    }

    fclose(fpls);

    landsell *dls = pls;
    temp =0;
    while (dls != NULL)
    {
        temp++;
        if (dls->active == 1)
        {
            counter[2] ++;
        }

        dls = dls->lsnext;
    }




    houserent *phr = NULL, *qhr = NULL;
    FILE *fphr;

    fphr = fopen("House-Rent.txt", "r");

    if (fphr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linehr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linehr, sizeof(linehr), fphr) != NULL)
    {
        houserent *dhr = malloc(sizeof(houserent));

        sscanf(linehr, "%d", &dhr->active);
        fgets(linehr, sizeof(linehr), fphr); // Read the area line
        sscanf(linehr, "%d", &dhr->area);
        fgets(linehr, sizeof(linehr), fphr); // Read the address line
        sscanf(linehr, "%[^\n]", dhr->address);
        fgets(linehr, sizeof(linehr), fphr); // Read the type line
        sscanf(linehr, "%s", dhr->type);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->floor);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->old);
        fgets(linehr, sizeof(linehr), fphr); // Read the floor line
        sscanf(linehr, "%d", &dhr->total_meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the phone line
        sscanf(linehr, "%s", dhr->phone);
        fgets(linehr, sizeof(linehr), fphr); // Read the bedroom line
        sscanf(linehr, "%d", &dhr->bedroom);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->year);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->month);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->day);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->amount);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->mortgage);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%s", &dhr->writer);


        dhr->hrnext = NULL;

        if (phr == NULL)
        {
            phr = dhr;
            qhr = phr;
        }
        else
        {
            qhr->hrnext = dhr;
            qhr = dhr;
        }
    }

    fclose(fphr);
    houserent *dhr = phr;
    temp =0;
    while (dhr != NULL)
    {
        temp++;
        if (dhr->active == 1)
        {
            counter[3] ++;
        }

        dhr = dhr->hrnext;

    }




    officerent *por = NULL, *qor = NULL;
    FILE *fpor;

    fpor = fopen("Office-Rent.txt", "r");

    if (fpor == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineor[256]; // Assuming a maximum line length of 255 characters


    while (fgets(lineor, sizeof(lineor), fpor) != NULL)
    {
        officerent *dor = malloc(sizeof(officerent));

        sscanf(lineor, "%d", &dor->active);
        fgets(lineor, sizeof(lineor), fpor); // Read the area line
        sscanf(lineor, "%d", &dor->area);
        fgets(lineor, sizeof(lineor), fpor); // Read the address line
        sscanf(lineor, "%[^\n]", dor->address);
        fgets(lineor, sizeof(lineor), fpor); // Read the type line
        sscanf(lineor, "%[^\n]", dor->type);
        fgets(lineor, sizeof(lineor), fpor); // Read the old line
        sscanf(lineor, "%d", &dor->old);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->meterage);
        fgets(lineor, sizeof(lineor), fpor); // Read the meterage line
        sscanf(lineor, "%d", &dor->floor);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->total_meterage);
        fgets(lineor, sizeof(lineor), fp); // Read the phone line
        sscanf(lineor, "%s", dor->phone);
        fgets(lineor, sizeof(lineor), fpor); // Read the bedroom line
        sscanf(lineor, "%d", &dor->officeroom);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->year);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->month);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->day);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->amount);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->mortgage);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%s", &dor->writer);


        dor->ornext = NULL;

        if (por == NULL)
        {
            por = dor;
            qor = por;
        }
        else
        {
            qor->ornext = dor;
            qor = dor;
        }
    }

    fclose(fpor);
    officerent *dor = por;
    temp =0;
    while (dor != NULL)
    {
        temp++;
        if (dor->active == 1)
        {
            counter[4] ++;
        }

        dor = dor->ornext;

    }

    landrent *plr = NULL, *qlr = NULL;
    FILE *fplr;

    fplr = fopen("Land-Rent.txt", "r");

    if (fplr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linelr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linelr, sizeof(linelr), fplr) != NULL)
    {
        landrent *dlr = malloc(sizeof(landrent));

        sscanf(linelr, "%d", &dlr->active);
        fgets(linelr, sizeof(linelr), fplr); // Read the area line
        sscanf(linelr, "%d", &dlr->area);
        fgets(linelr, sizeof(linelr), fplr); // Read the address line
        sscanf(linelr, "%[^\n]", dlr->address);
        fgets(linelr, sizeof(linelr), fplr); // Read the type line
        sscanf(linelr, "%s", dlr->type);
        fgets(linelr, sizeof(linelr), fplr); // Read the meterage line
        sscanf(linelr, "%d", &dlr->meterage);
        fgets(linelr, sizeof(linelr), fplr); // Read the phone line
        sscanf(linelr, "%s", dlr->phone);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->year);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->month);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->day);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->amount);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%d", &dlr->mortgage);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%s", &dlr->writer);


        dlr->lrnext = NULL;

        if (plr == NULL)
        {
            plr = dlr;
            qlr = plr;
        }
        else
        {
            qlr->lrnext = dlr;
            qlr = dlr;
        }
    }

    fclose(fplr);

    landrent *dlr = plr;
    temp =0;
    while (dlr != NULL)
    {
        temp++;
        if (dlr->active == 1)
        {
            counter[5] ++;
        }

        dlr = dlr->lrnext;
    }

    fflush(stdin);
    system("cls");
    printf("1 - The number of properties in the archives\n\n2 - List of properties available in a specific municipal area\n\n3 - List of properties with specific building age\n\n4 - List of properties with specific infrastructure size\n\n5 - List of all residential properties with specific number of bedrooms\n\n6 - List of properties with a certain price\n\n7 - List of rental properties with specific limits for mortgage and rent\n\n8 - List of all apartments available in a particular floor\n\n");
    printf("9 - The total value of properties registered in the system for sale\n\n10 - The list of system users who have registered properties in the system\n\n11 - The list of properties registered in the system in a certain period\n\n12 - List of properties Removed\n\n13 - The list of system users and the date of the last activity of each user\n\n0 - Return To The Previous Menu\n\n\n>Please Enter Your Choice: ");
    char inputrr[5];
    gets(inputrr);
    int a = atoi(inputrr);
    int min , max ,tmp , min1 , max1;
    int totalvalue = 0 , totalvaluel = 0 , totalvalueo  = 0 ,  totalvalueh = 0 ;
    switch(a)
    {
        case 1:
            fflush(stdin);
            system("cls");
            printf ("Number of Houses for Sale : %d  \n",counter[0]);
            printf ("Number of Offices for Sale : %d  \n",counter[1]);
            printf ("Number of Lands for Sale : %d  \n",counter[2]);
            printf ("Number of houses for Rent : %d  \n",counter[3]);
            printf ("Number of Offices for Rent : %d  \n",counter[4]);
            printf ("Number of Lands for Rent : %d  \n",counter[5]);
            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            adminreports();
            break;

        case 2:
            fflush(stdin);
            system("cls");
            printf ("Which municipal area do you want? Please enter it (area 1 to 5) : \n\n");
            int temp2;
            scanf("%d",&temp2);

            fflush(stdin);
            system("cls");

            printf("All Property in Municipal area %d: \n\n\n",temp2);

            int c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale in municipal area %d: \n",temp2);

            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\nNo houses were found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nOffices for sale in municipal area %d: \n",temp2);
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n%d\n", dos->cost);

                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nLands for sale in municipal area %d: \n",temp2);
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }

            if (c == 0)
            {
                printf("\nNo land was found for sale in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nHouses for Rent in municipal area %d: \n",temp2);
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\nNo Houses were found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nOffice for Rent in municipal area %d: \n",temp2);
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nLand for Rent in municipal area %d: \n",temp2);
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1 && dlr->area == temp2)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }

            if (c == 0)
            {
                printf("\nNo land was found for rent in this municipal area!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            adminreports();


        case 3:
            system("cls");
            printf(" - List of properties with specific building age :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d to %d old: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->old <= max && d->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->old <= max && dos->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->old <= max && dhr->old >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->old <= max && dor->old >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();
            fflush(stdin);
            system("cls");
            adminreports();
            break;
        case 4:
            system("cls");
            printf(" - List of properties with specific meterage :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d to %d meterage: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->meterage <= max && d->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->meterage <= max && dos->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for sale : \n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->meterage <= max && dls->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->meterage <= max && dhr->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->meterage <= max && dor->meterage >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for Rent : \n");
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1 && dlr->meterage <= max && dlr->meterage >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;

        case 5:

            system("cls");
            printf(" - List of properties with specific number of Room (bedroom and office room) :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d  to %d Rooms: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->bedroom <= max && d->bedroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->officeroom <= max && dos->officeroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->bedroom <= max && dhr->bedroom >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->officeroom <= max && dor->officeroom >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;

        case 6:
            system("cls");
            printf(" - List of properties with specific cost :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d Rial to %d Rial cost: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->cost <= max && d->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->cost <= max && dos->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for sale : \n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1 && dls->cost <= max && dls->cost >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for sale in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;



         case 7:
            system("cls");
            printf(" - List of properties with specific Monthly Rent & Mortgage :\n\n");
            printf ("Enter a range for Monthly Rent :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }


            printf ("\nEnter a range for Mortgage :\n");
            scanf("%d",&min1);
            printf ("to \n");
            scanf("%d",&max1);
            if (min1>max1)
            {
                tmp = max1 ;
                max1 = min1 ;
                min1 = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d Rial to %d Rial Monthly Rent & %d Rial to %d Rial Mortgage: \n\n\n",min , max ,min1 , max1);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->amount <= max && dhr->amount >= min && dhr->mortgage <= max1 && dhr->mortgage >= min1)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1  && dor->amount <= max && dor->amount >= min && dor->mortgage <= max1 && dor->mortgage >= min1)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for Rent : \n");
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 1  && dlr->amount <= max && dlr->amount >= min  && dlr->mortgage <= max1 && dlr->mortgage >= min1 )
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands were found for Rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;

        case 8:

            system("cls");
            printf(" - List of properties with specific number of Floor :\n\n");
            printf ("Enter a range :\n");
            scanf("%d",&min);
            printf ("to \n");
            scanf("%d",&max);
            if (min>max)
            {
                tmp = max ;
                max = min ;
                min = tmp ;
            }

            fflush(stdin);
            system("cls");

            printf("All Property with %d  to %d Floor: \n\n\n",min , max);

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1 && d->floor <= max && d->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo houses were found for sale in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 && dos->floor <= max && dos->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo offices were found for sale in this Renge!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 1 && dhr->floor <= max && dhr->floor >= min)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses were found for rent in this Renge!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 1 && dor->floor <= max && dor->floor >= min)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo offices were found for rent in this Renge!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;

        case 9:
            system("cls");
            printf(" - List of Values :\n\n");



            printf("\n--------------------------------------------------------\n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 1)
                {

                    totalvalueh = totalvalueh + d->cost;
                }
                d = d->hsnext;
            }

            printf("\n\nTotal value of houses registered for sale : %d Rial\n\n",totalvalueh);

            printf("\n--------------------------------------------------------\n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 1 )
                {

                    totalvalueo = totalvalueo + dos->cost;
                }
                dos = dos->osnext;
            }

            printf("\n\nTotal value of Offices registered for sale : %d Rial\n\n",totalvalueo);

            printf("\n--------------------------------------------------------\n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 1)
                {

                   totalvaluel = totalvaluel + dls->cost;
                }
                dls = dls->lsnext;
            }
            printf("\n\nTotal value of Lands registered for sale : %d Rial\n\n",totalvaluel);



            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            totalvalue = totalvaluel + totalvalueo + totalvalueh ;

            printf("\n\nValue of all properties registered for sale : %d Rial\n\n",totalvalue);

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;


        case 10:
            system("cls");
            int n =0 ;
            char maxu[30] , minu[30];
            int maxv , minv;
            current = head;
            n =0 ;
            strcpy(maxu, current->username);
            maxv = 0;
            strcpy(minu, current->username);
            minv = 100;

            printf(" - List of system users who have registered properties in the system :\n\n");
            while (current != NULL)
            {
                d = p;
                while (d != NULL)
                {
                    if (strcmp(current->username, d->writer) == 0 )
                    {
                        n++ ;
                    }
                    d = d->hsnext;
                }

                dos = pos;
                while (dos != NULL)
                {
                    if (strcmp(current->username, dos->writer) == 0 )
                    {
                        n++ ;
                    }
                    dos = dos->osnext;
                }

                dls = pls;
                while (dls != NULL)
                {
                    if (strcmp(current->username, dls->writer) == 0 )
                    {
                        n++ ;
                    }
                    dls = dls->lsnext;
                }

                dhr = phr;
                while (dhr != NULL)
                {
                    if (strcmp(current->username, dhr->writer) == 0 )
                    {
                        n++ ;
                    }
                    dhr = dhr->hrnext;
                }

                dor = por;
                while (dor != NULL)
                {
                    if (strcmp(current->username, dor->writer) == 0 )
                    {
                        n++ ;
                    }
                    dor = dor->ornext;
                }

                dlr = plr;
                while (dlr != NULL)
                {
                    if (strcmp(current->username, dlr->writer) == 0 )
                    {
                        n++ ;
                    }
                    dlr = dlr->lrnext;
                }

                if (maxv < n)
                {
                    maxv=n;
                    strcpy(maxu, current->username);
                }
                else
                    if (minv > n)
                    {
                        minv=n;
                        strcpy(minu, current->username);
                    }
                printf("\n--------------------------------------------------------\n");
                printf("%s has registered %d properties",current->username , n);
                current = current->next;
                n = 0 ;
            }
            printf("\n--------------------------------------------------------\n");

            printf("\n%s is the most registered property with %d registered properties.",maxu,maxv);
            printf("\nThe least registered property is %s with %d registered properties.",minu,minv);
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;


        case 11 :
            system("cls");
            int yr , mh, dy ;
            printf ("First, enter today's date :\n");
            printf("Year : \n");
            scanf("%d",&yr);
            printf("Month : \n");
            scanf("%d",&mh);
            printf("Day : \n");
            scanf("%d",&dy);
            system("cls");
            printf("Date : %d - %d - %d \n",yr,mh,dy);
            printf(" - List of properties registered in the system in a certain period :\n\n");

            printf("Choose what to search by : \n\n\n");
            printf(" - 1 Daily  \n\n");
            printf(" - 2 Weekly  \n\n");
            printf(" - 3 Monthly  \n\n");
            printf(" - 0 Return To The Previous Menu\n\n\n>Please Enter Your Choice: ");
            char tmp ;
            fflush(stdin);
            tmp = getchar();
            fflush(stdin);
            int in , mh2 , dy2;
            switch(tmp)
            {
                case '1' :
                    fflush(stdin);
                    system("cls");
                    printf("Daily : \n");
                    printf("\n\nHow many Days before can I show you the registered properties?\nPlease enter the number\n");
                    scanf("%d",&in);
                    fflush(stdin);
                    system("cls");
                    printf("All properties registered in the last %d Days Ago: \n\n\n" , in);
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Houses for sale : \n");
                    d = p;
                    dy2 = dy;
                    mh2 = mh;

                    while (d != NULL)
                    {
                        if (d->active == 1 && d->day <= dy && d->day >= dy - in && d->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", d->area);
                            printf("address : %s\n", d->address);
                            printf("type : %s\n", d->type);
                            printf("old : %d\n", d->old);
                            printf("meterage : %d\n", d->meterage);
                            printf("floor : %d\n", d->floor);
                            printf("total meterage : %d\n", d->total_meterage);
                            printf("phone : %s\n", d->phone);
                            printf("bedroom : %d\n", d->bedroom);
                            printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                            printf("cost : %d Rial\n", d->cost);
                        }
                        d = d->hsnext;
                    }
                    d = p;
                    if (dy - in <1)
                    {
                        dy2 = 30 + (dy - in) ;
                        mh2 = mh - 1;
                        while (d != NULL)
                        {
                            if (d->active == 1 && d->day <= 30 && d->day >= dy2 && d->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", d->area);
                                printf("address : %s\n", d->address);
                                printf("type : %s\n", d->type);
                                printf("old : %d\n", d->old);
                                printf("meterage : %d\n", d->meterage);
                                printf("floor : %d\n", d->floor);
                                printf("total meterage : %d\n", d->total_meterage);
                                printf("phone : %s\n", d->phone);
                                printf("bedroom : %d\n", d->bedroom);
                                printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                                printf("cost : %d Rial\n", d->cost);
                            }
                            d = d->hsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo houses were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffices for sale : \n");
                    dos = pos;
                    while (dos != NULL)
                    {
                        if (dos->active == 1 && dos->day <= dy && dos->day >= dy - in && dos->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dos->area);
                            printf("address : %s\n", dos->address);
                            printf("type : %s\n", dos->type);
                            printf("old : %d\n", dos->old);
                            printf("meterage : %d\n", dos->meterage);
                            printf("floor : %d\n", dos->floor);
                            printf("total meterage : %d\n", dos->total_meterage);
                            printf("phone : %s\n", dos->phone);
                            printf("office room : %d\n", dos->officeroom);
                            printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                            printf("cost : %d Rial\n", dos->cost);
                        }
                        dos = dos->osnext;
                    }
                    dos = pos;
                    if (dy - in <1)
                    {
                        while (dos != NULL)
                        {
                            if (dos->active == 1 && dos->day <= 30 && dos->day >= dy2 && dos->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dos->area);
                                printf("address : %s\n", dos->address);
                                printf("type : %s\n", dos->type);
                                printf("old : %d\n", dos->old);
                                printf("meterage : %d\n", dos->meterage);
                                printf("floor : %d\n", dos->floor);
                                printf("total meterage : %d\n", dos->total_meterage);
                                printf("phone : %s\n", dos->phone);
                                printf("office room : %d\n", dos->officeroom);
                                printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                                printf("cost : %d Rial\n", dos->cost);
                            }
                            dos = dos->osnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\nNo offices were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for sale : \n");
                    dls = pls;
                    while (dls != NULL)
                    {
                        if (dls->active == 1 && dls->day <= dy && dls->day >= dy - in && dls->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dls->area);
                            printf("address : %s\n", dls->address);
                            printf("type : %s\n", dls->type);
                            printf("meterage : %d\n", dls->meterage);
                            printf("phone : %s\n", dls->phone);
                            printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                            printf("cost : %d Rial\n", dls->cost);
                        }
                        dls = dls->lsnext;
                    }
                    dls = pls;
                    if (dy - in <1)
                    {
                        while (dls != NULL)
                        {
                            if (dls->active == 1 && dls->day <= 30 && dls->day >= dy2 && dls->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dls->area);
                                printf("address : %s\n", dls->address);
                                printf("type : %s\n", dls->type);
                                printf("meterage : %d\n", dls->meterage);
                                printf("phone : %s\n", dls->phone);
                                printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                                printf("cost : %d Rial\n", dls->cost);
                            }
                            dls = dls->lsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nHouses for Rent : \n");
                    dhr = phr;
                    while (dhr != NULL)
                    {
                        if (dhr->active == 1 && dhr->day <= dy && dhr->day >= dy - in && dhr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dhr->area);
                            printf("address : %s\n", dhr->address);
                            printf("type : %s\n", dhr->type);
                            printf("old : %d\n", dhr->old);
                            printf("meterage : %d\n", dhr->meterage);
                            printf("floor : %d\n", dhr->floor);
                            printf("total meterage : %d\n", dhr->total_meterage);
                            printf("phone : %s\n", dhr->phone);
                            printf("bedroom : %d\n", dhr->bedroom);
                            printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                            printf("monthly rent : %d Rial\n", dhr->amount);
                            printf("mortgage : %d Rial\n", dhr->mortgage);
                        }
                        dhr = dhr->hrnext;
                    }
                    dhr = phr;
                    if (dy - in <1)
                    {
                        while (dhr != NULL)
                        {
                            if (dhr->active == 1 && dhr->day <= 30 && dhr->day >= dy2 && dhr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dhr->area);
                                printf("address : %s\n", dhr->address);
                                printf("type : %s\n", dhr->type);
                                printf("old : %d\n", dhr->old);
                                printf("meterage : %d\n", dhr->meterage);
                                printf("floor : %d\n", dhr->floor);
                                printf("total meterage : %d\n", dhr->total_meterage);
                                printf("phone : %s\n", dhr->phone);
                                printf("bedroom : %d\n", dhr->bedroom);
                                printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                                printf("monthly rent : %d Rial\n", dhr->amount);
                                printf("mortgage : %d Rial\n", dhr->mortgage);
                            }
                        dhr = dhr->hrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Houses were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffice for Rent : \n");
                    dor = por;
                    while (dor != NULL)
                    {
                        if (dor->active == 1 && dor->day <= dy && dor->day >= dy - in && dor->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dor->area);
                            printf("address : %s\n", dor->address);
                            printf("type : %s\n", dor->type);
                            printf("old : %d\n", dor->old);
                            printf("meterage : %d\n", dor->meterage);
                            printf("floor : %d\n", dor->floor);
                            printf("total meterage : %d\n", dor->total_meterage);
                            printf("phone : %s\n", dor->phone);
                            printf("office room : %d\n", dor->officeroom);
                            printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                            printf("monthly rent : %d Rial\n", dor->amount);
                            printf("mortgage : %d Rial\n", dor->mortgage);
                        }
                        dor = dor->ornext;
                    }
                    dor = por;
                    if (dy - in <1)
                    {
                        while (dor != NULL)
                        {
                            if (dor->active == 1 && dor->day <= 30 && dor->day >= dy2 && dor->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dor->area);
                                printf("address : %s\n", dor->address);
                                printf("type : %s\n", dor->type);
                                printf("old : %d\n", dor->old);
                                printf("meterage : %d\n", dor->meterage);
                                printf("floor : %d\n", dor->floor);
                                printf("total meterage : %d\n", dor->total_meterage);
                                printf("phone : %s\n", dor->phone);
                                printf("office room : %d\n", dor->officeroom);
                                printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                                printf("monthly rent : %d Rial\n", dor->amount);
                                printf("mortgage : %d Rial\n", dor->mortgage);
                            }
                        dor = dor->ornext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo offices were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for Rent : \n");
                    dlr = plr;
                    while (dlr != NULL)
                    {
                        if (dlr->active == 1 && dlr->day <= dy && dlr->day >= dy - in && dlr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dlr->area);
                            printf("address : %s\n", dlr->address);
                            printf("type : %s\n", dlr->type);
                            printf("meterage : %d\n", dlr->meterage);
                            printf("phone : %s\n", dlr->phone);
                            printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                            printf("monthly rent : %d Rial\n", dlr->amount);
                            printf("mortgage : %d Rial\n", dlr->mortgage);
                        }
                        dlr = dlr->lrnext;
                    }
                    dlr = plr;
                    if (dy - in <1)
                    {
                        while (dlr != NULL)
                        {
                            if (dlr->active == 1 && dlr->day <= 30 && dlr->day >= dy2 && dlr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dlr->area);
                                printf("address : %s\n", dlr->address);
                                printf("type : %s\n", dlr->type);
                                printf("meterage : %d\n", dlr->meterage);
                                printf("phone : %s\n", dlr->phone);
                                printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                                printf("monthly rent : %d Rial\n", dlr->amount);
                                printf("mortgage : %d Rial\n", dlr->mortgage);
                            }
                            dlr = dlr->lrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }

                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");

                    printf("\nPress a key for back to menu \n");
                    getch();

                    break;

                case '2' :
                    fflush(stdin);
                    system("cls");
                    printf("Weekly : \n");
                    printf("\n\nHow many Weeks before can I show you the registered properties?\nPlease enter the number\n");
                    scanf("%d",&in);
                    fflush(stdin);
                    system("cls");
                    printf("All properties registered in the last %d Weeks Ago: \n\n\n" , in);
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Houses for sale : \n");
                    d = p;
                    in = in * 7 ;
                    dy2 = dy;
                    mh2 = mh;

                    while (d != NULL)
                    {
                        if (d->active == 1 && d->day <= dy && d->day >= dy - in && d->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", d->area);
                            printf("address : %s\n", d->address);
                            printf("type : %s\n", d->type);
                            printf("old : %d\n", d->old);
                            printf("meterage : %d\n", d->meterage);
                            printf("floor : %d\n", d->floor);
                            printf("total meterage : %d\n", d->total_meterage);
                            printf("phone : %s\n", d->phone);
                            printf("bedroom : %d\n", d->bedroom);
                            printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                            printf("cost : %d Rial\n", d->cost);
                        }
                        d = d->hsnext;
                    }
                    d = p;
                    if (dy - in <1)
                    {
                        dy2 = 30 + (dy - in) ;
                        mh2 = mh - 1;
                        while (d != NULL)
                        {
                            if (d->active == 1 && d->day <= 30 && d->day >= dy2 && d->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", d->area);
                                printf("address : %s\n", d->address);
                                printf("type : %s\n", d->type);
                                printf("old : %d\n", d->old);
                                printf("meterage : %d\n", d->meterage);
                                printf("floor : %d\n", d->floor);
                                printf("total meterage : %d\n", d->total_meterage);
                                printf("phone : %s\n", d->phone);
                                printf("bedroom : %d\n", d->bedroom);
                                printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                                printf("cost : %d Rial\n", d->cost);
                            }
                            d = d->hsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo houses were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffices for sale : \n");
                    dos = pos;
                    while (dos != NULL)
                    {
                        if (dos->active == 1 && dos->day <= dy && dos->day >= dy - in && dos->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dos->area);
                            printf("address : %s\n", dos->address);
                            printf("type : %s\n", dos->type);
                            printf("old : %d\n", dos->old);
                            printf("meterage : %d\n", dos->meterage);
                            printf("floor : %d\n", dos->floor);
                            printf("total meterage : %d\n", dos->total_meterage);
                            printf("phone : %s\n", dos->phone);
                            printf("office room : %d\n", dos->officeroom);
                            printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                            printf("cost : %d Rial\n", dos->cost);
                        }
                        dos = dos->osnext;
                    }
                    dos = pos;
                    if (dy - in <1)
                    {
                        while (dos != NULL)
                        {
                            if (dos->active == 1 && dos->day <= 30 && dos->day >= dy2 && dos->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dos->area);
                                printf("address : %s\n", dos->address);
                                printf("type : %s\n", dos->type);
                                printf("old : %d\n", dos->old);
                                printf("meterage : %d\n", dos->meterage);
                                printf("floor : %d\n", dos->floor);
                                printf("total meterage : %d\n", dos->total_meterage);
                                printf("phone : %s\n", dos->phone);
                                printf("office room : %d\n", dos->officeroom);
                                printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                                printf("cost : %d Rial\n", dos->cost);
                            }
                            dos = dos->osnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\nNo offices were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for sale : \n");
                    dls = pls;
                    while (dls != NULL)
                    {
                        if (dls->active == 1 && dls->day <= dy && dls->day >= dy - in && dls->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dls->area);
                            printf("address : %s\n", dls->address);
                            printf("type : %s\n", dls->type);
                            printf("meterage : %d\n", dls->meterage);
                            printf("phone : %s\n", dls->phone);
                            printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                            printf("cost : %d Rial\n", dls->cost);
                        }
                        dls = dls->lsnext;
                    }
                    dls = pls;
                    if (dy - in <1)
                    {
                        while (dls != NULL)
                        {
                            if (dls->active == 1 && dls->day <= 30 && dls->day >= dy2 && dls->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dls->area);
                                printf("address : %s\n", dls->address);
                                printf("type : %s\n", dls->type);
                                printf("meterage : %d\n", dls->meterage);
                                printf("phone : %s\n", dls->phone);
                                printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                                printf("cost : %d Rial\n", dls->cost);
                            }
                            dls = dls->lsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nHouses for Rent : \n");
                    dhr = phr;
                    while (dhr != NULL)
                    {
                        if (dhr->active == 1 && dhr->day <= dy && dhr->day >= dy - in && dhr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dhr->area);
                            printf("address : %s\n", dhr->address);
                            printf("type : %s\n", dhr->type);
                            printf("old : %d\n", dhr->old);
                            printf("meterage : %d\n", dhr->meterage);
                            printf("floor : %d\n", dhr->floor);
                            printf("total meterage : %d\n", dhr->total_meterage);
                            printf("phone : %s\n", dhr->phone);
                            printf("bedroom : %d\n", dhr->bedroom);
                            printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                            printf("monthly rent : %d Rial\n", dhr->amount);
                            printf("mortgage : %d Rial\n", dhr->mortgage);
                        }
                        dhr = dhr->hrnext;
                    }
                    dhr = phr;
                    if (dy - in <1)
                    {
                        while (dhr != NULL)
                        {
                            if (dhr->active == 1 && dhr->day <= 30 && dhr->day >= dy2 && dhr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dhr->area);
                                printf("address : %s\n", dhr->address);
                                printf("type : %s\n", dhr->type);
                                printf("old : %d\n", dhr->old);
                                printf("meterage : %d\n", dhr->meterage);
                                printf("floor : %d\n", dhr->floor);
                                printf("total meterage : %d\n", dhr->total_meterage);
                                printf("phone : %s\n", dhr->phone);
                                printf("bedroom : %d\n", dhr->bedroom);
                                printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                                printf("monthly rent : %d Rial\n", dhr->amount);
                                printf("mortgage : %d Rial\n", dhr->mortgage);
                            }
                        dhr = dhr->hrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Houses were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffice for Rent : \n");
                    dor = por;
                    while (dor != NULL)
                    {
                        if (dor->active == 1 && dor->day <= dy && dor->day >= dy - in && dor->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dor->area);
                            printf("address : %s\n", dor->address);
                            printf("type : %s\n", dor->type);
                            printf("old : %d\n", dor->old);
                            printf("meterage : %d\n", dor->meterage);
                            printf("floor : %d\n", dor->floor);
                            printf("total meterage : %d\n", dor->total_meterage);
                            printf("phone : %s\n", dor->phone);
                            printf("office room : %d\n", dor->officeroom);
                            printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                            printf("monthly rent : %d Rial\n", dor->amount);
                            printf("mortgage : %d Rial\n", dor->mortgage);
                        }
                        dor = dor->ornext;
                    }
                    dor = por;
                    if (dy - in <1)
                    {
                        while (dor != NULL)
                        {
                            if (dor->active == 1 && dor->day <= 30 && dor->day >= dy2 && dor->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dor->area);
                                printf("address : %s\n", dor->address);
                                printf("type : %s\n", dor->type);
                                printf("old : %d\n", dor->old);
                                printf("meterage : %d\n", dor->meterage);
                                printf("floor : %d\n", dor->floor);
                                printf("total meterage : %d\n", dor->total_meterage);
                                printf("phone : %s\n", dor->phone);
                                printf("office room : %d\n", dor->officeroom);
                                printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                                printf("monthly rent : %d Rial\n", dor->amount);
                                printf("mortgage : %d Rial\n", dor->mortgage);
                            }
                        dor = dor->ornext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo offices were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for Rent : \n");
                    dlr = plr;
                    while (dlr != NULL)
                    {
                        if (dlr->active == 1 && dlr->day <= dy && dlr->day >= dy - in && dlr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dlr->area);
                            printf("address : %s\n", dlr->address);
                            printf("type : %s\n", dlr->type);
                            printf("meterage : %d\n", dlr->meterage);
                            printf("phone : %s\n", dlr->phone);
                            printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                            printf("monthly rent : %d Rial\n", dlr->amount);
                            printf("mortgage : %d Rial\n", dlr->mortgage);
                        }
                        dlr = dlr->lrnext;
                    }
                    dlr = plr;
                    if (dy - in <1)
                    {
                        while (dlr != NULL)
                        {
                            if (dlr->active == 1 && dlr->day <= 30 && dlr->day >= dy2 && dlr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dlr->area);
                                printf("address : %s\n", dlr->address);
                                printf("type : %s\n", dlr->type);
                                printf("meterage : %d\n", dlr->meterage);
                                printf("phone : %s\n", dlr->phone);
                                printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                                printf("monthly rent : %d Rial\n", dlr->amount);
                                printf("mortgage : %d Rial\n", dlr->mortgage);
                            }
                            dlr = dlr->lrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }

                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");

                    printf("\nPress a key for back to menu \n");
                    getch();
                    break;

                case '3' :
                    fflush(stdin);
                    system("cls");
                    printf("Monthly : \n");
                    printf("\n\nHow many Months before can I show you the registered properties?\nPlease enter the number\n");
                    scanf("%d",&in);
                    fflush(stdin);
                    system("cls");
                    printf("All properties registered in the last %d Months Ago: \n\n\n" , in);
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Houses for sale : \n");
                    d = p;
                    dy2 = dy;
                    mh2 = mh;

                    while (d != NULL)
                    {
                        if (d->active == 1 && d->day <= dy && d->day >= 1 && d->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", d->area);
                            printf("address : %s\n", d->address);
                            printf("type : %s\n", d->type);
                            printf("old : %d\n", d->old);
                            printf("meterage : %d\n", d->meterage);
                            printf("floor : %d\n", d->floor);
                            printf("total meterage : %d\n", d->total_meterage);
                            printf("phone : %s\n", d->phone);
                            printf("bedroom : %d\n", d->bedroom);
                            printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                            printf("cost : %d Rial\n", d->cost);
                        }
                        d = d->hsnext;
                    }
                    d = p;
                    if (dy - (30*in) <1)
                    {
                        mh2 = mh - 1;
                        while (d != NULL)
                        {
                            if (d->active == 1 && d->day <= 30 && d->day >= dy && d->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", d->area);
                                printf("address : %s\n", d->address);
                                printf("type : %s\n", d->type);
                                printf("old : %d\n", d->old);
                                printf("meterage : %d\n", d->meterage);
                                printf("floor : %d\n", d->floor);
                                printf("total meterage : %d\n", d->total_meterage);
                                printf("phone : %s\n", d->phone);
                                printf("bedroom : %d\n", d->bedroom);
                                printf("Date :  %d - %d - %d \n", d->year , d->month , d->day);
                                printf("cost : %d Rial\n", d->cost);
                            }
                            d = d->hsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo houses were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffices for sale : \n");
                    dos = pos;
                    while (dos != NULL)
                    {
                        if (dos->active == 1 && dos->day <= dy && dos->day >= 1 && dos->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dos->area);
                            printf("address : %s\n", dos->address);
                            printf("type : %s\n", dos->type);
                            printf("old : %d\n", dos->old);
                            printf("meterage : %d\n", dos->meterage);
                            printf("floor : %d\n", dos->floor);
                            printf("total meterage : %d\n", dos->total_meterage);
                            printf("phone : %s\n", dos->phone);
                            printf("office room : %d\n", dos->officeroom);
                            printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                            printf("cost : %d Rial\n", dos->cost);
                        }
                        dos = dos->osnext;
                    }
                    dos = pos;
                    if (dy - (30*in) <1)
                    {
                        while (dos != NULL)
                        {
                            if (dos->active == 1 && dos->day <= 30 && dos->day >= dy && dos->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dos->area);
                                printf("address : %s\n", dos->address);
                                printf("type : %s\n", dos->type);
                                printf("old : %d\n", dos->old);
                                printf("meterage : %d\n", dos->meterage);
                                printf("floor : %d\n", dos->floor);
                                printf("total meterage : %d\n", dos->total_meterage);
                                printf("phone : %s\n", dos->phone);
                                printf("office room : %d\n", dos->officeroom);
                                printf("Date :  %d - %d - %d \n", dos->year , dos->month , dos->day);
                                printf("cost : %d Rial\n", dos->cost);
                            }
                            dos = dos->osnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\nNo offices were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for sale : \n");
                    dls = pls;
                    while (dls != NULL)
                    {
                        if (dls->active == 1 && dls->day <= dy && dls->day >= 1 && dls->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dls->area);
                            printf("address : %s\n", dls->address);
                            printf("type : %s\n", dls->type);
                            printf("meterage : %d\n", dls->meterage);
                            printf("phone : %s\n", dls->phone);
                            printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                            printf("cost : %d Rial\n", dls->cost);
                        }
                        dls = dls->lsnext;
                    }
                    dls = pls;
                    if (dy - (30*in) <1)
                    {
                        while (dls != NULL)
                        {
                            if (dls->active == 1 && dls->day <= 30 && dls->day >= dy && dls->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dls->area);
                                printf("address : %s\n", dls->address);
                                printf("type : %s\n", dls->type);
                                printf("meterage : %d\n", dls->meterage);
                                printf("phone : %s\n", dls->phone);
                                printf("Date :  %d - %d - %d \n", dls->year , dls->month , dls->day);
                                printf("cost : %d Rial\n", dls->cost);
                            }
                            dls = dls->lsnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nHouses for Rent : \n");
                    dhr = phr;
                    while (dhr != NULL)
                    {
                        if (dhr->active == 1 && dhr->day <= dy && dhr->day >= 1 && dhr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dhr->area);
                            printf("address : %s\n", dhr->address);
                            printf("type : %s\n", dhr->type);
                            printf("old : %d\n", dhr->old);
                            printf("meterage : %d\n", dhr->meterage);
                            printf("floor : %d\n", dhr->floor);
                            printf("total meterage : %d\n", dhr->total_meterage);
                            printf("phone : %s\n", dhr->phone);
                            printf("bedroom : %d\n", dhr->bedroom);
                            printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                            printf("monthly rent : %d Rial\n", dhr->amount);
                            printf("mortgage : %d Rial\n", dhr->mortgage);
                        }
                        dhr = dhr->hrnext;
                    }
                    dhr = phr;
                    if (dy - (30*in) <1)
                    {
                        while (dhr != NULL)
                        {
                            if (dhr->active == 1 && dhr->day <= 30 && dhr->day >= dy && dhr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dhr->area);
                                printf("address : %s\n", dhr->address);
                                printf("type : %s\n", dhr->type);
                                printf("old : %d\n", dhr->old);
                                printf("meterage : %d\n", dhr->meterage);
                                printf("floor : %d\n", dhr->floor);
                                printf("total meterage : %d\n", dhr->total_meterage);
                                printf("phone : %s\n", dhr->phone);
                                printf("bedroom : %d\n", dhr->bedroom);
                                printf("Date :  %d - %d - %d \n", dhr->year , dhr->month , dhr->day);
                                printf("monthly rent : %d Rial\n", dhr->amount);
                                printf("mortgage : %d Rial\n", dhr->mortgage);
                            }
                        dhr = dhr->hrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Houses were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("\n\nOffice for Rent : \n");
                    dor = por;
                    while (dor != NULL)
                    {
                        if (dor->active == 1 && dor->day <= dy && dor->day >= 1 && dor->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dor->area);
                            printf("address : %s\n", dor->address);
                            printf("type : %s\n", dor->type);
                            printf("old : %d\n", dor->old);
                            printf("meterage : %d\n", dor->meterage);
                            printf("floor : %d\n", dor->floor);
                            printf("total meterage : %d\n", dor->total_meterage);
                            printf("phone : %s\n", dor->phone);
                            printf("office room : %d\n", dor->officeroom);
                            printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                            printf("monthly rent : %d Rial\n", dor->amount);
                            printf("mortgage : %d Rial\n", dor->mortgage);
                        }
                        dor = dor->ornext;
                    }
                    dor = por;
                    if (dy - (30*in) <1)
                    {
                        while (dor != NULL)
                        {
                            if (dor->active == 1 && dor->day <= 30 && dor->day >= dy && dor->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dor->area);
                                printf("address : %s\n", dor->address);
                                printf("type : %s\n", dor->type);
                                printf("old : %d\n", dor->old);
                                printf("meterage : %d\n", dor->meterage);
                                printf("floor : %d\n", dor->floor);
                                printf("total meterage : %d\n", dor->total_meterage);
                                printf("phone : %s\n", dor->phone);
                                printf("office room : %d\n", dor->officeroom);
                                printf("Date :  %d - %d - %d \n", dor->year , dor->month , dor->day);
                                printf("monthly rent : %d Rial\n", dor->amount);
                                printf("mortgage : %d Rial\n", dor->mortgage);
                            }
                        dor = dor->ornext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo offices were found for rent in this Date Renge!\n\n");
                    }
                    c = 0 ;
                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");
                    printf("Lands for Rent : \n");
                    dlr = plr;
                    while (dlr != NULL)
                    {
                        if (dlr->active == 1 && dlr->day <= dy && dlr->day >= 1 && dlr->month == mh)
                        {
                            printf("\n--------------------------------------------------------\n");
                            c++ ;
                            printf("\n%d-\n\n",c);
                            printf("area : %d\n", dlr->area);
                            printf("address : %s\n", dlr->address);
                            printf("type : %s\n", dlr->type);
                            printf("meterage : %d\n", dlr->meterage);
                            printf("phone : %s\n", dlr->phone);
                            printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                            printf("monthly rent : %d Rial\n", dlr->amount);
                            printf("mortgage : %d Rial\n", dlr->mortgage);
                        }
                        dlr = dlr->lrnext;
                    }
                    dlr = plr;
                    if (dy - (30*in) <1)
                    {
                        while (dlr != NULL)
                        {
                            if (dlr->active == 1 && dlr->day <= 30 && dlr->day >= dy && dlr->month == mh2)
                            {
                                printf("\n--------------------------------------------------------\n");
                                c++ ;
                                printf("\n%d-\n\n",c);
                                printf("area : %d\n", dlr->area);
                                printf("address : %s\n", dlr->address);
                                printf("type : %s\n", dlr->type);
                                printf("meterage : %d\n", dlr->meterage);
                                printf("phone : %s\n", dlr->phone);
                                printf("Date :  %d - %d - %d \n", dlr->year , dlr->month , dlr->day);
                                printf("monthly rent : %d Rial\n", dlr->amount);
                                printf("mortgage : %d Rial\n", dlr->mortgage);
                            }
                            dlr = dlr->lrnext;
                        }
                    }
                    if (c == 0)
                    {
                        printf("\n\nNo Lands were found for sale in this Date Renge!\n\n");
                    }

                    printf("\n--------------------------------------------------------\n");
                    printf("\n--------------------------------------------------------\n");

                    printf("\nPress a key for back to menu \n");
                    getch();

                    break;

                default :
                    fflush(stdin);
                    system("cls");
                    adminreports();
                    break;
            }

            fflush(stdin);
            system("cls");
            adminreports();
            break;









        case 12 :
            system("cls");
            printf(" - List of deleted properties :\n\n");
            fflush(stdin);
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Houses for sale : \n");
            d = p;
            while (d != NULL)
            {
                if (d->active == 0)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Houses for Sell have been removed!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffices for sale : \n");
            dos = pos;
            while (dos != NULL)
            {
                if (dos->active == 0)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            if (c == 0)
            {
                printf("\nNo Offices for Sell have been removed!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for sale : \n");
            dls = pls;
            while (dls != NULL)
            {
                if (dls->active == 0)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands for Sell have been removed!\n\n");
            }

            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nHouses for Rent : \n");
            dhr = phr;
            while (dhr != NULL)
            {
                if (dhr->active == 0)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("monthly rent : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);
                }
                dhr = dhr->hrnext;
            }

            if (c == 0)
            {
                printf("\n\nNo Houses for Rent have been removed!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\n\nOffice for Rent : \n");
            dor = por;
            while (dor != NULL)
            {
                if (dor->active == 0)
                {
            printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("monthly rent : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            if (c == 0)
            {
                printf("\n\nNo Offices for Rent have been removed!\n\n");
            }
            c = 0 ;
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("Lands for Rent : \n");
            dlr = plr;
            while (dlr != NULL)
            {
                if (dlr->active == 0)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("monthly rent : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            if (c == 0)
            {
                printf("\n\nNo Lands for Rent have been removed!\n\n");
            }

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;


        case 13 :
            system("cls");
            current = head;
            printf(" - List of Users :\n\n");
            current = head;
            while (current != NULL)
            {
                printf("\n%s\n",current->username);
                current = current->next;
            }
            current = head;

            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");
            printf("\nPress a key for back to menu \n");
            getch();

            fflush(stdin);
            system("cls");
            adminreports();
            break;


        case 0:
            d = p ;
            while (p != NULL)
            {
            housesell *temp = p;
            p = p->hsnext;
            free(temp);
            }

            dos = pos ;
            while (pos != NULL)
            {
            officesell *temp = pos;
            pos = pos->osnext;
            free(temp);
            }

            dls = pls ;
            while (pls != NULL)
            {
            landsell *temp = pls;
            pls = pls->lsnext;
            free(temp);
            }

            dhr = phr ;
            while (phr != NULL)
            {
            houserent *temp = phr;
            phr = phr->hrnext;
            free(temp);
            }

            dor = por ;
            while (por != NULL)
            {
            officerent *temp = por;
            por = por->ornext;
            free(temp);
            }

            dlr = plr ;
            while (plr != NULL)
            {
            landrent *temp = plr;
            plr = plr->lrnext;
            free(temp);
            }
            fflush(stdin);
            system("cls");
            menuuser(2);
            break;
        default :
            fflush(stdin);
            system("cls");
            adminreports();
            break;


    }


}



void settingmelk(int admin)
{
    fflush(stdin);
    system("cls");
    housesell *p = NULL, *q = NULL;

    FILE *fp;

    fp = fopen("House-Sell.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char line[256]; // Assuming a maximum line length of 255 characters

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        housesell *d = malloc(sizeof(housesell));

        sscanf(line, "%d", &d->active);
        fgets(line, sizeof(line), fp); // Read the area line
        sscanf(line, "%d", &d->area);
        fgets(line, sizeof(line), fp); // Read the address line
        sscanf(line, "%[^\n]", d->address);
        fgets(line, sizeof(line), fp); // Read the type line
        sscanf(line, "%s", d->type);
        fgets(line, sizeof(line), fp); // Read the old line
        sscanf(line, "%d", &d->old);
        fgets(line, sizeof(line), fp); // Read the meterage line
        sscanf(line, "%d", &d->meterage);
        fgets(line, sizeof(line), fp); // Read the floor line
        sscanf(line, "%d", &d->floor);
        fgets(line, sizeof(line), fp); // Read the total_meterage line
        sscanf(line, "%d", &d->total_meterage);
        fgets(line, sizeof(line), fp); // Read the phone line
        sscanf(line, "%s", d->phone);
        fgets(line, sizeof(line), fp); // Read the bedroom line
        sscanf(line, "%d", &d->bedroom);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%d", &d->year);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->month);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->day);
        fgets(line, sizeof(line), fp);
        sscanf(line, "%d", &d->cost);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%s", &d->writer);


        d->hsnext = NULL;

        if (p == NULL)
        {
            p = d;
            q = p;
        }
        else
        {
            q->hsnext = d;
            q = d;
        }
    }

    fclose(fp);

    housesell *d = p;


    officesell *pos = NULL, *qos = NULL;
    FILE *fpos;

    fpos = fopen("Office-Sell.txt", "r");

    if (fpos == NULL) {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineos[256]; // Assuming a maximum line length of 255 characters
    while (fgets(lineos, sizeof(lineos), fpos) != NULL)
    {
        officesell *dos = malloc(sizeof(officesell));

        sscanf(lineos, "%d", &dos->active);
        fgets(lineos, sizeof(lineos), fpos); // Read the area line
        sscanf(lineos, "%d", &dos->area);
        fgets(lineos, sizeof(lineos), fpos); // Read the address line
        sscanf(lineos, "%[^\n]", dos->address);
        fgets(lineos, sizeof(lineos), fpos); // Read the type line
        sscanf(lineos, "%[^\n]", dos->type);
        fgets(lineos, sizeof(lineos), fpos); // Read the old line
        sscanf(lineos, "%d", &dos->old);
        fgets(line, sizeof(lineos), fpos); // Read the meterage line
        sscanf(line, "%d", &dos->meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the floor line
        sscanf(lineos, "%d", &dos->floor);
        fgets(lineos, sizeof(lineos), fpos); // Read the total_meterage line
        sscanf(lineos, "%d", &dos->total_meterage);
        fgets(lineos, sizeof(lineos), fpos); // Read the phone line
        sscanf(lineos, "%s", dos->phone);
        fgets(lineos, sizeof(lineos), fpos); // Read the bedroom line
        sscanf(lineos, "%d", &dos->officeroom);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%d", &dos->year);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->month);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->day);
        fgets(lineos, sizeof(lineos), fpos);
        sscanf(lineos, "%d", &dos->cost);
        fgets(lineos, sizeof(lineos), fpos); // Read the cost line
        sscanf(lineos, "%s", &dos->writer);


        dos->osnext = NULL;

        if (pos == NULL)
        {
            pos = dos;
            qos = pos;
        }
        else
        {
            qos->osnext = dos;
            qos = dos;
        }
    }

    fclose(fpos);

    officesell *dos = pos;

    landsell *pls = NULL, *qls = NULL;
    FILE *fpls;

    fpls = fopen("Land-Sell.txt", "r");

    if (fpls == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linels[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linels, sizeof(line), fpls) != NULL)
    {
        landsell *dls = malloc(sizeof(landsell));

        sscanf(linels, "%d", &dls->active);
        fgets(linels, sizeof(linels), fpls); // Read the area line
        sscanf(linels, "%d", &dls->area);
        fgets(linels, sizeof(linels), fpls); // Read the address line
        sscanf(linels, "%[^\n]", dls->address);
        fgets(linels, sizeof(linels), fpls); // Read the type line
        sscanf(linels, "%s", dls->type);
        fgets(linels, sizeof(linels), fpls); // Read the meterage line
        sscanf(linels, "%d", &dls->meterage);
        fgets(linels, sizeof(linels), fpls); // Read the phone line
        sscanf(linels, "%s", dls->phone);
        fgets(linels, sizeof(linels), fpls); // Read the cost line
        sscanf(linels, "%d", &dls->year);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->month);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->day);
        fgets(linels, sizeof(linels), fpls);
        sscanf(linels, "%d", &dls->cost);
        fgets(linels, sizeof(linels), fpls); // Read the Writer
        sscanf(linels, "%s", &dls->writer);


        dls->lsnext = NULL;

        if (pls == NULL)
        {
            pls = dls;
            qls = pls;
        }
        else
        {
            qls->lsnext = dls;
            qls = dls;
        }
    }

    fclose(fpls);

    landsell *dls = pls;

    houserent *phr = NULL, *qhr = NULL;
    FILE *fphr;

    fphr = fopen("House-Rent.txt", "r");

    if (fphr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linehr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linehr, sizeof(linehr), fphr) != NULL)
    {
        houserent *dhr = malloc(sizeof(houserent));

        sscanf(linehr, "%d", &dhr->active);
        fgets(linehr, sizeof(linehr), fphr); // Read the area line
        sscanf(linehr, "%d", &dhr->area);
        fgets(linehr, sizeof(linehr), fphr); // Read the address line
        sscanf(linehr, "%[^\n]", dhr->address);
        fgets(linehr, sizeof(linehr), fphr); // Read the type line
        sscanf(linehr, "%s", dhr->type);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->floor);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the old line
        sscanf(linehr, "%d", &dhr->old);
        fgets(linehr, sizeof(linehr), fphr); // Read the floor line
        sscanf(linehr, "%d", &dhr->total_meterage);
        fgets(linehr, sizeof(linehr), fphr); // Read the phone line
        sscanf(linehr, "%s", dhr->phone);
        fgets(linehr, sizeof(linehr), fphr); // Read the bedroom line
        sscanf(linehr, "%d", &dhr->bedroom);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->year);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->month);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->day);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->amount);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%d", &dhr->mortgage);
        fgets(linehr, sizeof(linehr), fphr);
        sscanf(linehr, "%s", &dhr->writer);


        dhr->hrnext = NULL;

        if (phr == NULL)
        {
            phr = dhr;
            qhr = phr;
        }
        else
        {
            qhr->hrnext = dhr;
            qhr = dhr;
        }
    }

    fclose(fphr);
    houserent *dhr = phr;


    officerent *por = NULL, *qor = NULL;
    FILE *fpor;

    fpor = fopen("Office-Rent.txt", "r");

    if (fpor == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char lineor[256]; // Assuming a maximum line length of 255 characters


    while (fgets(lineor, sizeof(lineor), fpor) != NULL)
    {
        officerent *dor = malloc(sizeof(officerent));

        sscanf(lineor, "%d", &dor->active);
        fgets(lineor, sizeof(lineor), fpor); // Read the area line
        sscanf(lineor, "%d", &dor->area);
        fgets(lineor, sizeof(lineor), fpor); // Read the address line
        sscanf(lineor, "%[^\n]", dor->address);
        fgets(lineor, sizeof(lineor), fpor); // Read the type line
        sscanf(lineor, "%[^\n]", dor->type);
        fgets(lineor, sizeof(lineor), fpor); // Read the old line
        sscanf(lineor, "%d", &dor->old);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->meterage);
        fgets(lineor, sizeof(lineor), fpor); // Read the meterage line
        sscanf(lineor, "%d", &dor->floor);
        fgets(lineor, sizeof(lineor), fpor); // Read the total_meterage line
        sscanf(lineor, "%d", &dor->total_meterage);
        fgets(lineor, sizeof(lineor), fp); // Read the phone line
        sscanf(lineor, "%s", dor->phone);
        fgets(lineor, sizeof(lineor), fpor); // Read the bedroom line
        sscanf(lineor, "%d", &dor->officeroom);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->year);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->month);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->day);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->amount);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%d", &dor->mortgage);
        fgets(lineor, sizeof(lineor), fpor);
        sscanf(lineor, "%s", &dor->writer);


        dor->ornext = NULL;

        if (por == NULL)
        {
            por = dor;
            qor = por;
        }
        else
        {
            qor->ornext = dor;
            qor = dor;
        }
    }

    fclose(fpor);
    officerent *dor = por;

    landrent *plr = NULL, *qlr = NULL;
    FILE *fplr;

    fplr = fopen("Land-Rent.txt", "r");

    if (fplr == NULL)
    {
        printf("Error opening the file.\n");
        exit(1);
    }

    char linelr[256]; // Assuming a maximum line length of 255 characters

    while (fgets(linelr, sizeof(linelr), fplr) != NULL)
    {
        landrent *dlr = malloc(sizeof(landrent));

        sscanf(linelr, "%d", &dlr->active);
        fgets(linelr, sizeof(linelr), fplr); // Read the area line
        sscanf(linelr, "%d", &dlr->area);
        fgets(linelr, sizeof(linelr), fplr); // Read the address line
        sscanf(linelr, "%[^\n]", dlr->address);
        fgets(linelr, sizeof(linelr), fplr); // Read the type line
        sscanf(linelr, "%s", dlr->type);
        fgets(linelr, sizeof(linelr), fplr); // Read the meterage line
        sscanf(linelr, "%d", &dlr->meterage);
        fgets(linelr, sizeof(linelr), fplr); // Read the phone line
        sscanf(linelr, "%s", dlr->phone);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->year);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->month);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->day);
        fgets(linelr, sizeof(linelr), fplr);
        sscanf(linelr, "%d", &dlr->amount);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%d", &dlr->mortgage);
        fgets(linelr, sizeof(linelr), fplr); // Read the cost line
        sscanf(linelr, "%s", &dlr->writer);


        dlr->lrnext = NULL;

        if (plr == NULL)
        {
            plr = dlr;
            qlr = plr;
        }
        else
        {
            qlr->lrnext = dlr;
            qlr = dlr;
        }
    }

    fclose(fplr);

    landrent *dlr = plr;

    fflush(stdin);
    printf (" 1 - House - Sell : \n\n");
    printf (" 2 - Office - Sell : \n\n");
    printf (" 3 - Land - Sell : \n\n");
    printf (" 4 - House - Rent : \n\n");
    printf (" 5 - Office - Rent : \n\n");
    printf (" 6 - Land - Rent : \n\n");
    printf ("\n - Press button 0 to return to the Previous Menu\n\n\n>Please Enter Your Choice: ");
    char temp ;
    int c = 0 ;
    int inputrr;


    temp = getchar();
    switch (temp)
    {
        case '1':
            fflush(stdin);
            system("cls");
            printf (" 1 - House - Sell : \n\n");
            c = 0 ;
            d = p;
            while (d != NULL)
            {
                if(d->active == 1)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", d->area);
                    printf("address : %s\n", d->address);
                    printf("type : %s\n", d->type);
                    printf("old : %d\n", d->old);
                    printf("meterage : %d\n", d->meterage);
                    printf("floor : %d\n", d->floor);
                    printf("total meterage : %d\n", d->total_meterage);
                    printf("phone : %s\n", d->phone);
                    printf("bedroom : %d\n", d->bedroom);
                    printf("cost : %d Rial\n", d->cost);
                }
                d = d->hsnext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            d = p;
            c = 0 ;
            while (d != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    d->active = 0;
                    break;
                }

                d = d->hsnext;
            }
            fflush(stdin);
            FILE *f;
            f = fopen("House-Sell.txt","w");
            d = p;
            int cont = 0 ;
            while(d!=NULL)
            {
                if(cont==0)
                {
                    fprintf(f,"%d\n",d->active);
                    cont++;
                }
                else
                {
                   fprintf(f,"\n%d\n",d->active);
                }
                fprintf(f,"%d\n",d->area);
                fprintf(f,"%s\n",d->address);
                fprintf(f,"%s\n",d->type);
                fprintf(f,"%d\n",d->old);
                fprintf(f,"%d\n",d->meterage);
                fprintf(f,"%d\n",d->floor);
                fprintf(f,"%d\n",d->total_meterage);
                fprintf(f,"%s\n",d->phone);
                fprintf(f,"%d\n",d->bedroom);
                fprintf(f,"%d\n",d->year);
                fprintf(f,"%d\n",d->month);
                fprintf(f,"%d\n",d->day);
                fprintf(f,"%d\n",d->cost);
                fprintf(f,"%s",d->writer);

                d = d->hsnext ;
            }
            fclose (f);

            system("cls");
            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '2':

            fflush(stdin);
            system("cls");
            printf (" 1 - Office - Sell : \n\n");
            dos = pos;
            c = 0 ;
            while (dos != NULL )
            {
                if( dos->active == 1 )
                {

                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dos->area);
                    printf("address : %s\n", dos->address);
                    printf("type : %s\n", dos->type);
                    printf("old : %d\n", dos->old);
                    printf("meterage : %d\n", dos->meterage);
                    printf("floor : %d\n", dos->floor);
                    printf("total meterage : %d\n", dos->total_meterage);
                    printf("phone : %s\n", dos->phone);
                    printf("office room : %d\n", dos->officeroom);
                    printf("cost : %d Rial\n", dos->cost);
                }
                dos = dos->osnext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            dos = pos;
            c = 0 ;

            while (dos != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    dos->active = 0;
                    break;
                }

                dos = dos->osnext;
            }
            fflush(stdin);
            FILE *fos;
            fos = fopen("Office-Sell.txt","w");
            dos = pos;
            cont = 0 ;
            while(dos!=NULL)
            {
                if(cont==0)
                {
                    fprintf(fos,"%d\n",dos->active);
                    cont++;
                }
                else
                {
                   fprintf(fos,"\n%d\n",dos->active);
                }
                fprintf(fos,"%d\n",dos->area);
                fprintf(fos,"%s\n",dos->address);
                fprintf(fos,"%s\n",dos->type);
                fprintf(fos,"%d\n",dos->old);
                fprintf(fos,"%d\n",dos->meterage);
                fprintf(fos,"%d\n",dos->floor);
                fprintf(fos,"%d\n",dos->total_meterage);
                fprintf(fos,"%s\n",dos->phone);
                fprintf(fos,"%d\n",dos->officeroom);
                fprintf(fos,"%d\n",dos->year);
                fprintf(fos,"%d\n",dos->month);
                fprintf(fos,"%d\n",dos->day);
                fprintf(fos,"%d\n",dos->cost);
                fprintf(fos,"%s",dos->writer);

                dos = dos->osnext ;
            }
            fclose (fos);

            system("cls");

            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '3':

            fflush(stdin);
            system("cls");
            printf (" 1 - Land - Sell : \n\n");
            dls = pls;
            c = 0 ;
            while (dls != NULL )
            {
                if( dls->active == 1 )
                {

                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dls->area);
                    printf("address : %s\n", dls->address);
                    printf("type : %s\n", dls->type);
                    printf("meterage : %d\n", dls->meterage);
                    printf("phone : %s\n", dls->phone);
                    printf("cost : %d Rial\n", dls->cost);
                }
                dls = dls->lsnext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            dls = pls;
            c = 0 ;

            while (dls != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    dls->active = 0;
                    break;
                }

                dls = dls->lsnext;
            }
            fflush(stdin);
            FILE *fls;
            fls = fopen("Land-Sell.txt","w");
            dls = pls;
            cont = 0 ;
            while(dls!=NULL)
            {
                if(cont==0)
                {
                    fprintf(fls,"%d\n",dls->active);
                    cont++;
                }
                else
                {
                   fprintf(fls,"\n%d\n",dls->active);
                }
                fprintf(fls,"%d\n",dls->area);
                fprintf(fls,"%s\n",dls->address);
                fprintf(fls,"%s\n",dls->type);
                fprintf(fls,"%d\n",dls->meterage);
                fprintf(fls,"%s\n",dls->phone);
                fprintf(fls,"%d\n",dls->year);
                fprintf(fls,"%d\n",dls->month);
                fprintf(fls,"%d\n",dls->day);
                fprintf(fls,"%d\n",dls->cost);
                fprintf(fls,"%s",dls->writer);

                dls = dls->lsnext ;
            }
            fclose (fls);

            system("cls");

            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '4':
            fflush(stdin);
            system("cls");
            printf (" 1 - House - Rent : \n\n");
            c = 0 ;
            dhr = phr;
            while (dhr != NULL)
            {
                if(dhr->active == 1)
                {
                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dhr->area);
                    printf("address : %s\n", dhr->address);
                    printf("type : %s\n", dhr->type);
                    printf("old : %d\n", dhr->old);
                    printf("meterage : %d\n", dhr->meterage);
                    printf("floor : %d\n", dhr->floor);
                    printf("total meterage : %d\n", dhr->total_meterage);
                    printf("phone : %s\n", dhr->phone);
                    printf("bedroom : %d\n", dhr->bedroom);
                    printf("amount : %d Rial\n", dhr->amount);
                    printf("mortgage : %d Rial\n", dhr->mortgage);

                }
                dhr = dhr->hrnext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            dhr = phr;
            c = 0 ;
            while (dhr != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    dhr->active = 0;
                    break;
                }

                dhr = dhr->hrnext;
            }
            fflush(stdin);
            FILE *fhr;
            fhr = fopen("House-Rent.txt","w");
            dhr = phr;
            cont = 0 ;
            while(dhr!=NULL)
            {
                if(cont==0)
                {
                    fprintf(fhr,"%d\n",dhr->active);
                    cont++;
                }
                else
                {
                   fprintf(fhr,"\n%d\n",dhr->active);
                }
                fprintf(fhr,"%d\n",dhr->area);
                fprintf(fhr,"%s\n",dhr->address);
                fprintf(fhr,"%s\n",dhr->type);
                fprintf(fhr,"%d\n",dhr->old);
                fprintf(fhr,"%d\n",dhr->meterage);
                fprintf(fhr,"%d\n",dhr->floor);
                fprintf(fhr,"%d\n",dhr->total_meterage);
                fprintf(fhr,"%s\n",dhr->phone);
                fprintf(fhr,"%d\n",dhr->bedroom);
                fprintf(fhr,"%d\n",dhr->year);
                fprintf(fhr,"%d\n",dhr->month);
                fprintf(fhr,"%d\n",dhr->day);
                fprintf(fhr,"%d\n",dhr->amount);
                fprintf(fhr,"%d\n",dhr->mortgage);
                fprintf(fhr,"%s",dhr->writer);

                dhr = dhr->hrnext ;
            }
            fclose (fhr);

            system("cls");
            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '5':
            fflush(stdin);
            system("cls");
            printf (" 1 - Office - Rent : \n\n");
            dor = por;
            c = 0 ;
            while (dor != NULL )
            {
                if( dor->active == 1 )
                {

                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dor->area);
                    printf("address : %s\n", dor->address);
                    printf("type : %s\n", dor->type);
                    printf("old : %d\n", dor->old);
                    printf("meterage : %d\n", dor->meterage);
                    printf("floor : %d\n", dor->floor);
                    printf("total meterage : %d\n", dor->total_meterage);
                    printf("phone : %s\n", dor->phone);
                    printf("office room : %d\n", dor->officeroom);
                    printf("amount : %d Rial\n", dor->amount);
                    printf("mortgage : %d Rial\n", dor->mortgage);
                }
                dor = dor->ornext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            dor = por;
            c = 0 ;

            while (dor != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    dor->active = 0;
                    break;
                }

                dor = dor->ornext;
            }
            fflush(stdin);
            FILE *fosf;
            fosf = fopen("Office-Rent.txt","w");
            dor = por;
            cont = 0 ;
            while(dor!=NULL)
            {
                if(cont==0)
                {
                    fprintf(fosf,"%d\n",dor->active);
                    cont++;
                }
                else
                {
                   fprintf(fosf,"\n%d\n",dor->active);
                }
                fprintf(fosf,"%d\n",dor->area);
                fprintf(fosf,"%s\n",dor->address);
                fprintf(fosf,"%s\n",dor->type);
                fprintf(fosf,"%d\n",dor->old);
                fprintf(fosf,"%d\n",dor->meterage);
                fprintf(fosf,"%d\n",dor->floor);
                fprintf(fosf,"%d\n",dor->total_meterage);
                fprintf(fosf,"%s\n",dor->phone);
                fprintf(fosf,"%d\n",dor->officeroom);
                fprintf(fosf,"%d\n",dor->year);
                fprintf(fosf,"%d\n",dor->month);
                fprintf(fosf,"%d\n",dor->day);
                fprintf(fosf,"%d\n",dor->amount);
                fprintf(fosf,"%d\n",dor->mortgage);
                fprintf(fosf,"%s",dor->writer);

                dor = dor->ornext ;
            }
            fclose (fosf);

            system("cls");

            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '6':
            fflush(stdin);
            system("cls");
            printf (" - Land - Rent : \n\n");
            dlr = plr;
            c = 0 ;
            while (dlr != NULL )
            {
                if( dlr->active == 1 )
                {

                    printf("\n--------------------------------------------------------\n");
                    c++ ;
                    printf("\n%d-\n\n",c);
                    printf("area : %d\n", dlr->area);
                    printf("address : %s\n", dlr->address);
                    printf("type : %s\n", dlr->type);
                    printf("meterage : %d\n", dlr->meterage);
                    printf("phone : %s\n", dlr->phone);
                    printf("amount : %d Rial\n", dlr->amount);
                    printf("mortgage : %d Rial\n", dlr->mortgage);
                }
                dlr = dlr->lrnext;
            }
            printf("\n--------------------------------------------------------\n");
            printf("\n--------------------------------------------------------\n");

            printf ("\nNow Select The Property You Want To Delete (Enter Its Number)(If you enter '0' you will be return to menu) :");
            scanf("%d", &inputrr);
            if (inputrr == 0 )
            {
                if (admin == 2)
                    settingmelk(2);
                else
                    settingmelk(1);
            }
            dlr = plr;
            c = 0 ;

            while (dlr != NULL)
            {
                c++ ;
                if (c == inputrr)
                {
                    dlr->active = 0;
                    break;
                }

                dlr = dlr->lrnext;
            }
            fflush(stdin);
            FILE *flr;
            flr = fopen("Land-Rent.txt","w");
            dlr = plr;
            cont = 0 ;
            while(dlr!=NULL)
            {
                if(cont==0)
                {
                    fprintf(flr,"%d\n",dlr->active);
                    cont++;
                }
                else
                {
                   fprintf(flr,"\n%d\n",dlr->active);
                }
                fprintf(flr,"%d\n",dlr->area);
                fprintf(flr,"%s\n",dlr->address);
                fprintf(flr,"%s\n",dlr->type);
                fprintf(flr,"%d\n",dlr->meterage);
                fprintf(flr,"%s\n",dlr->phone);
                fprintf(flr,"%d\n",dlr->year);
                fprintf(flr,"%d\n",dlr->month);
                fprintf(flr,"%d\n",dlr->day);
                fprintf(flr,"%d\n",dlr->amount);
                fprintf(flr,"%d\n",dlr->mortgage);
                fprintf(flr,"%s",dlr->writer);

                dlr = dlr->lrnext ;
            }
            fclose (flr);

            system("cls");

            printf("\n\nThe property was successfully removed !\n\nPress a key to return to the User account settings.");
            getchar();
            fflush(stdin);
            system("cls");
            if (admin == 2)
                settingmelk(2);
            else
                settingmelk(1);
            break;
        case '0':
            d = p ;
            while (p != NULL)
            {
            housesell *temp = p;
            p = p->hsnext;
            free(temp);
            }

            dos = pos ;
            while (pos != NULL)
            {
            officesell *temp = pos;
            pos = pos->osnext;
            free(temp);
            }

            dls = pls ;
            while (pls != NULL)
            {
            landsell *temp = pls;
            pls = pls->lsnext;
            free(temp);
            }

            dhr = phr ;
            while (phr != NULL)
            {
            houserent *temp = phr;
            phr = phr->hrnext;
            free(temp);
            }

            dor = por ;
            while (por != NULL)
            {
            officerent *temp = por;
            por = por->ornext;
            free(temp);
            }

            dlr = plr ;
            while (plr != NULL)
            {
            landrent *temp = plr;
            plr = plr->lrnext;
            free(temp);
            }
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
