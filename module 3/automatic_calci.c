#include<stdio.h>
void main(){
    int a,b,c;
    printf("\npress 1 for subs:");
    printf("\npress 2 for sum:");
    printf("\npress 3 for multi:");
    printf("\npress 4 for devide:");
    printf("\npress 5 for modulo:");
    scanf("%d",&c);

    if(c==1)
    {
        printf("\nenter a value of a=");
        scanf("%d",&a);
        printf("\nenter a value of b=");
        scanf("%d",&b);
        printf("a-b=%d",a-b);
    }
    if (c==2)
    {
       printf("enter value of a=");
       scanf("%d", &a);
       printf("enter value of b=");
       scanf("%d", &b);
       printf("a+b=%d",a+b);

    }
    if(c==3)
    {
       printf("enter value of a=");
       scanf("%d", &a);
       printf("enter value of b=");
       scanf("%d", &b);
       printf("a*b=%d",a*b);
    }
    if(c==4)
    {  
       printf("enter value of a=");
       scanf("%d", &a);
       printf("enter value of b=");
       scanf("%d", &b);
       printf("%f",(float)a/b);
}
    if((c>1||c>5))
    {
       printf("enter value of a=");
       scanf("%d", &a);
       printf("enter value of b=");
       scanf("%d", &b);
       printf("%d",a%b);
}
}