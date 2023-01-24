#include<stdio.h>
#include<math.h>
void main(){
    int y,m,w,d;
    printf("enter year:");
    scanf("%d",&y);
    m=y*12;
    w=m*4;
    d=y*365;
    printf("\nmonth %d",m);
    printf("\nweek %d",w);
    printf("\nday %d",d);
}