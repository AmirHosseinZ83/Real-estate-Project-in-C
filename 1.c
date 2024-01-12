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
void setting()
{

}
void reports()
{

}

