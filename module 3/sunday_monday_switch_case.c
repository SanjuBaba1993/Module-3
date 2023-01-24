#include<stdio.h>
void main(){
    int Day;
    printf("\n");
    printf("\n Monday");
    printf("\n Tuesday");
    printf("\n Wednesday");
    printf("\n Thursday");
    printf("\n Ftiday");
    printf("\n Saturday");
    printf("\n enter a Day:");
    scanf("%d",&Day);
    switch(Day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Tuesday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Invalid");
        break;
    }
}