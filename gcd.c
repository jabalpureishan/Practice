#include <stdio.h>

int main(){
    int num1,num2;
    printf("enter number 1:\n");
    scanf("%d",&num1);
    printf("enter number 2:\n");
    scanf("%d",&num2);
    while(num1!=num2){
        if(num1>num2){
            num1 -= num2;
        }else{
            num2 -= num1;
        }
    }
    printf("GCD:%d",num1