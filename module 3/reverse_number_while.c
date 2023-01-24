#include<stdio.h>
void main(){
    int a=64728,b;

    while(a!=0){
    b=a%10;
    a=a/10;
    printf("\n%d",b);
}
}