#include<stdio.h>
void main(){
    int principle,rate, time, intrest;
    printf("enter the principle:");
    scanf("%d",&principle);

    printf("enter the rate:");
    scanf("%d",&rate);

    printf("enter the time:");
    scanf("%d",&time);

    intrest= principle * rate* time/100;
    printf("the simple intrest is %d:",intrest);
}