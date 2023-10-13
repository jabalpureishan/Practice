#include <stdio.h>

int main(){
    int num,sum1,sum2;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum1 += i;
    }
    sum2 = (num*(num+1))/2;
    printf("using loop: %d \n",sum1);
    printf("usinf formula %d \n",sum2);
}