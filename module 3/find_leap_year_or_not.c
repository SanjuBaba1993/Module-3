#include<stdio.h>
void main(){
    int y;
    printf("lets find the leap  year or not ");
    printf("\n enter year=");
    scanf("%d",&y);
    if(((y %4==0)&& (y %100!=0))||(y%400==0))
    printf("its leap year");
    else
     printf("its not leap year");
}