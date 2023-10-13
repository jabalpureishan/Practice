#include <stdio.h>

int main(){
    int x=1,y=1,num,temp;
    printf("enter number:");
    scanf("%d",&num);
    printf("%d %d ",x,y);
    num -= 2;
    while(num>0){
        temp = y;
        y += x;
        x = temp;
        printf("%d ",y);
        num -= 1;
    }
}