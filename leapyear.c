#include <stdio.h>
#include <stdbool.h>

int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    bool leap;
    if(year%4==0  && year%100!=0){
        leap = true;
    }else if(year%100==0 && year%400!=0){
        leap = false;
    }else if(year%400==0){
        leap = true;
    } else{
        leap = false;
    }
    printf("%d",leap);
}