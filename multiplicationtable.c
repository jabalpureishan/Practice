#include <stdio.h>
#include <stdlib.h>
int main(){
    int num,upto;
    printf("enter the number whose table is required:");
    scanf("%d",&num);
    printf("enter the number upto which table is required:");
    scanf("%d",&upto);
    for(int i=1;i<=upto;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}