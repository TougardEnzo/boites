#include<stdio.h>
#include<stdlib.h>
void deplacer_curs(int x,int y,int height,int lenght)
{
    int compt_lenght = 1;
    int compt_height = 1;
    printf("\033[%d;%dH",17,17);
    printf("llo");
    printf("\033[%d;%dH",x,y);
    printf("╔");
    while(compt_lenght != lenght-1)
    {
        printf("═");
        compt_lenght++;
    }
    printf("╗");
    printf("\033[%d;%dH",x+1,y+1);
    while(compt_height != height-1)
    {
        printf("\033[%d;%dH",x+compt_height,y);
        printf("║");
        printf("\033[%d;%dH",x+compt_height,y+lenght-1);
        printf("║");
        compt_height++;
    }
    printf("\033[%d;%dH",x+height-1,y);
    printf("╚");
    compt_lenght = 1;
    while(compt_lenght != lenght-1)
    {
        printf("═");
        compt_lenght++;
    }
    printf("╝");
}
//printf("\033[%d;%dH",x,y);
int main()
{
    int x,y,height,lenght;
    printf("x,y,height,lenght\n");
    scanf("%d%d%d%d", &x,&y,&height,&lenght);
    deplacer_curs(x,y,lenght,height);
    return(0);
}