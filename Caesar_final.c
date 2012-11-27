//Katerina Svihalkova
//Domaci ukol - Caesarova sifra
#include <stdio.h>
#define MAX_LINE_LEN 256



int main(void){

    FILE *r_file, *w_file;
    int c;
    char buffer[MAX_LINE_LEN];
    char ownfile[MAX_LINE_LEN];
    char *ptr=NULL;


    printf("Zadej jmeno souboru pro zasifrovani:");
    scanf("%s", ownfile);
    strcpy(buffer, ownfile);                //zkopirovani retezce
    ptr=strrchr(buffer,'.');                //nalezení poslední tecky
    strcpy(ptr,".cry");                     //nahrazení prípony



    char term;
    int klic;
    int d;

    printf("Zadej posun pro zasifrovani:");

    // osetreni desetinnych mist

    while(scanf("%d%c", &klic, &term) != 2 || term != 10)
    {
        printf("Posun musi byt cele cisl\n");
        fflush(stdin);
        printf("Zadej novy posun pro zasifrovani:");
    }

    r_file=fopen(ownfile,"r");
    w_file=fopen(buffer,"w");

    if(r_file == NULL || w_file == NULL)
    {
        printf("nelze otevrit jeden ze souboru\n");
        return 1;
    }

    while((c=getc(r_file))!=EOF)
    {
        if (c == ' '|| c=='\n')
        {
            putc(c,w_file);
        }
        else
        {
            if((d = c + klic) >= 65 && ( d = c + klic) <= 90 || (d=c+ klic) >= 97 && ( d=c+ klic) <= 122 )
                c+=klic;
             else
                c+= (klic - 26);
        }

        putc(c,w_file);
        c++;
    }

    fclose(r_file);
    fclose(w_file);

    return 0;
}



