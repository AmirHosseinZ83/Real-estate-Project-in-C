#include <stdio.h>
#include <stdlib.h>

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
    char writer[50];
    struct lr *lrnext;
};

typedef struct lr landrent;

int main(void) {
    housesell *p = NULL, *q = NULL;
    FILE *fp;

    fp = fopen("House-Sale.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }

    char line[256]; // Assuming a maximum line length of 255 characters

    while (fgets(line, sizeof(line), fp) != NULL) {
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
        sscanf(line, "%d", &d->cost);
        fgets(line, sizeof(line), fp); // Read the cost line
        sscanf(line, "%s", &d->writer);


        d->hsnext = NULL;

        if (p == NULL) {
            p = d;
            q = p;
        } else {
            q->hsnext = d;
            q = d;
        }
    }

    fclose(fp);

    housesell *d = p;
    while (d != NULL)
    {
        printf("%d\n", d->active);
        printf("%d\n", d->area);
        printf("%s\n", d->address);
        printf("%s\n", d->type);
        printf("%d\n", d->old);
        printf("%d\n", d->meterage);
        printf("%d\n", d->floor);
        printf("%d\n", d->total_meterage);
        printf("%s\n", d->phone);
        printf("%d\n", d->bedroom);
        printf("%d\n", d->cost);
        printf("%s\n", d->writer);

        d = d->hsnext;
        printf("\n\n\n");
    }
    d = p ;
            getch();

            fflush(stdin);
            system("cls");
            printf ("Which municipal area do you want? Please enter it (area 1 to 5) : \n");
            char temp2 = getchar();

            switch(temp2)
            {
                case '1':
                    fflush(stdin);
                    system("cls");

                    printf("\nAll Property in Municipal area 1: ");

                    int c = 1 ;

                    printf("Houses for sale in municipal area 1: \n");
                    while (d != NULL)
                    {
                        if (d->active == 1 && d->area == 1)
                        {
                            printf("%d-\n",c);
                            printf("%s\n", d->address);
                            printf("%s\n", d->type);
                            printf("%d\n", d->old);
                            printf("%d\n", d->meterage);
                            printf("%d\n", d->floor);
                            printf("%d\n", d->total_meterage);
                            printf("%s\n", d->phone);
                            printf("%d\n", d->bedroom);
                            printf("%d\n", d->cost);
                            printf("%s\n\n\n", d->writer);
                            c++ ;
                        }
                        d = d->hsnext;
                    }


            }
            printf("\nPress a key for back to menu \n");
            getch();

    printf("\n\n\n\n\nOFFICE Sell :\n\n");


    // Free allocated memory
    while (p != NULL) {
        housesell *temp = p;
        p = p->hsnext;
        free(temp);
    }






    officesell *pos = NULL, *qos = NULL;
    FILE *fpos;

    fpos = fopen("Office-Sell.txt", "r");

    if (fpos == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return an error code
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
    int temp =0;
    while (dos != NULL)
    {
        temp++;
        printf("%d\n", dos->active);
        printf("%d\n", dos->area);
        printf("%s\n", dos->address);
        printf("%s\n", dos->type);
        printf("%d\n", dos->old);
        printf("%d\n", dos->meterage);
        printf("%d\n", dos->floor);
        printf("%d\n", dos->total_meterage);
        printf("%s\n", dos->phone);
        printf("%d\n", dos->officeroom);
        printf("%d\n", dos->cost);
        printf("%s\n", dos->writer);

        dos = dos->osnext;
        printf("\n\n\n");
    }

    // Free allocated memory
    while (pos != NULL)
    {
        officesell *temp = pos;
        pos = pos->osnext;
        free(temp);
    }
    printf("\n\n\n%d",temp);







    printf("\n\n\n\n\nland Sell :\n\n");





    landsell *pls = NULL, *qls = NULL;
    FILE *fpls;

    fpls = fopen("Land-Sell.txt", "r");

    if (fpls == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Return an error code
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
        printf("%d\n", dls->active);
        printf("%d\n", dls->area);
        printf("%s\n", dls->address);
        printf("%s\n", dls->type);
        printf("%d\n", dls->meterage);
        printf("%s\n", dls->phone);
        printf("%d\n", dls->cost);
        printf("%s\n", dls->writer);

        dls = dls->lsnext;
        printf("\n\n\n");
    }

    // Free allocated memory
    while (pls != NULL)
    {
        landsell *temp = pls;
        pls = pls->lsnext;
        free(temp);
    }
    printf("\n\n\n%d",temp);




    printf("\n\n\n\n\nhouserent :\n\n");





    houserent *phr = NULL, *qhr = NULL;
    FILE *fphr;

    fphr = fopen("House-Rent.txt", "r");

    if (fphr == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Return an error code
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
        printf("%d\n", dhr->active);
        printf("%d\n", dhr->area);
        printf("%s\n", dhr->address);
        printf("%s\n", dhr->type);
        printf("%d\n", dhr->old);
        printf("%d\n", dhr->meterage);
        printf("%d\n", dhr->floor);
        printf("%d\n", dhr->total_meterage);
        printf("%s\n", dhr->phone);
        printf("%d\n", dhr->bedroom);
        printf("%d\n", dhr->amount);
        printf("%d\n", dhr->mortgage);
        printf("%s\n", dhr->writer);

        dhr = dhr->hrnext;
        printf("\n\n\n");
    }

    // Free allocated memory
    while (phr != NULL)
    {
        houserent *temp = phr;
        phr = phr->hrnext;
        free(temp);
    }
    printf("\n\n\n%d",temp);



    printf("\n\n\n\n\nOFFICE rent :\n\n");







    officerent *por = NULL, *qor = NULL;
    FILE *fpor;

    fpor = fopen("Office-Rent.txt", "r");

    if (fpor == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Return an error code
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
        printf("%d\n", dor->active);
        printf("%d\n", dor->area);
        printf("%s\n", dor->address);
        printf("%s\n", dor->type);
        printf("%d\n", dor->old);
        printf("%d\n", dor->meterage);
        printf("%d\n", dor->floor);
        printf("%d\n", dor->total_meterage);
        printf("%s\n", dor->phone);
        printf("%d\n", dor->officeroom);
        printf("%d\n", dor->amount);
        printf("%d\n", dor->mortgage);
        printf("%s\n", dor->writer);

        dor = dor->ornext;
        printf("\n\n\n");
    }

    // Free allocated memory
    while (por != NULL)
    {
        officerent *temp = por;
        por = por->ornext;
        free(temp);
    }
    printf("\n\n\n%d",temp);



    printf("\n\n\n\n\nLand rent :\n\n");






    landrent *plr = NULL, *qlr = NULL;
    FILE *fplr;

    fplr = fopen("Land-Rent.txt", "r");

    if (fplr == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Return an error code
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
        fgets(linelr, sizeof(linelr), fplr); // Read the bedroom line
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
        printf("%d\n", dlr->active);
        printf("%d\n", dlr->area);
        printf("%s\n", dlr->address);
        printf("%s\n", dlr->type);
        printf("%d\n", dlr->meterage);
        printf("%s\n", dlr->phone);
        printf("%d\n", dlr->amount);
        printf("%d\n", dlr->mortgage);
        printf("%s\n", dlr->writer);

        dlr = dlr->lrnext;
        printf("\n\n\n");
    }

    // Free allocated memory
    while (plr != NULL)
    {
        landrent *temp = plr;
        plr = plr->lrnext;
        free(temp);
    }
    printf("\n\n\n%d",temp);





















    return 0;
}


