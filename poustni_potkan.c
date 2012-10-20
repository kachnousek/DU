// domaci ukol 1
//
//Katerina Svihalkova
//
//Program poustni potkan-delka zivota potkanu


#include "stdio.h"
#include"math.h"
#define PI 3.14159

/*****************************************************************************************************************/

float get_r()
{
float r = 0;
    printf("Zadej polomer kuloveho zasobniku:");

    while(!scanf("%f",&r)||r<=0)
    {
    printf("Tak takhle opravdu ne\n");
    fflush(stdin);
    printf("Zadej znovu polomer koluveho zasobniku:");
    }

return r;
}

float calc_volume(float r)
{
    float volume = 0;
    volume = PI * pow(r,3)*(4.0/3.0);

return(volume);
}

int num_stlrs(){
    int stlrs = 0;
    char term;

    printf("Zadej pocet potkanu:");
    while(scanf("%d%c", &stlrs, &term) != 2 || term != '\n'){
        printf("Pocet potkanu neodpovida\n");
        fflush(stdin);
        printf("Zadej novy pocet potkanu:");
    }
    return(stlrs);
}
float calc_life_time(float volume, float stlrs){
    float time=0;
    time=volume/(stlrs*3);

return(time);

}
/****************************************************************************************************************/
int main(int argc, char* argv[])
{
float r= 0;
float volume = 0;
float stlrs=0;
float time=0;

printf("Program poustniho potkana\n");


r=get_r();

printf("r=%.2f\n",r);

volume= calc_volume(r);
printf("V nadrzi je %.2flitru\n\n",volume);

stlrs=num_stlrs();
printf("pocet potkanu %.0f\n\n",stlrs);

time=calc_life_time(volume, stlrs);
printf("Vsichni potkani umrou za %.0fdni\n",time);


return 0;

}


















