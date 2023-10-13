#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum = 0;
    int num,rem;
    printf("Enter a number :\n");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        sum += rem;
        num = num/10;
    }
    printf("sum:%d",sum);
    return 0;
}