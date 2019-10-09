#include<stdio.h>
#include<math.h>


typedef  struct point point;
struct point
{
     int x;
     int y;

};

int creationpoint()
{
    point p[4];
    int nb,d;
    printf("combien de point voulez-vous créer?");
    scanf("%d",&nb);
    for(d=0;d<nb;d++)
    {
        printf("x(%d), y(%d)=",d, d);
        scanf("%d %d",&(p[d].x), &(p[d].y));
    }
    for(d=0;d<nb;d++)
    {
        printf("Point %d : (%d,%d)\n",d, p[d].x,p[d].y);
    }

    int perimetre;
    perimetre =((p[0].x - p[0].y)+(p[0].x - p[0].y))*3.14*2;

    printf("perimetre = %d",perimetre);


    return 0;

}
