#include<stdio.h>
void main(){
    int no=1106;
    int rem1=no%10;
    printf("\nlast no...%d",rem1);
    int rem;
    while(no!=0){
        rem=no%10;
        no=no/10;
    }
    printf("\tfirst no...%d",rem);
}