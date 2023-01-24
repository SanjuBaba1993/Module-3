#include<stdio.h>
#define n 1
struct employee
{
    char name[100];
    int num;
    char address[100];
    int age;
    int mobile;
} e[n];

void main(){
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the name of the emplyee :");
        scanf("%s",e[i].name);
        printf("\n Enter the number of the employee :");
        scanf("%d",&e[i].num);
        printf("\n Enter the address/city of the employee :");
        scanf("%s",e[i].address);
        printf("\n Enter the Age of employee :");
        scanf("%d",&e[i].age);
        printf("\n Enter the mobile number of the employee :");
        scanf("%d",&e[i].mobile); 
    } 

    for (int i = 0; i < n; i++)
    {
        printf("----------------------------------------");
        printf("\n Employee name is :");
        puts(e[i].name);
        printf("\n Employee number is :%d",e[i].num);
        printf("\n Employee address is :");
        puts(e[i].address);
        printf("\n Employee age is : %d",e[i].age);
        printf("\n Employee mobile number is :%d",e[i].mobile);
        
    }

}