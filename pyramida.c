//domaci ukol2
//
//Katerina Svihalkova
//vzkresleni pyramidy


#include"stdio.h"
#include"math.h"

/******************************************************************************************************************************************/

int num_rows()
{
    int rows = 0;
    char term;

    printf("Zadej pocet radku:");
    while(scanf("%d%c", &rows, &term) != 2 || term != '\n'){
        printf("Radky byly spatne zadany\n");
        fflush(stdin);
        printf("Zadej novy pocet radku:");
    }

return(rows);
}

print(int num_star)
{
    int i;

    for(i=0; i<num_star; i++){

    putchar('*');
    }

putchar('\n');
}

get_star(int rows)
{
    int i,j;
    int x =(rows+1)/2;

    for(i=1; i<=x; i++){
    print(i);
    }

    for(j=i;j<=rows;j++){
    print(rows-j+1);
    }
}
/***********************************************************************************************************************************************/
int main(int argc, char* argv[])
{
int rows = num_rows();

get_star(rows);

return 0;
}
