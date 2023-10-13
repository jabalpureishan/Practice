#include <stdio.h>

int main(){
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(int i=num-1;i>1;i--){
        num *= i;
    }
    printf("factorial :%d",num);
}