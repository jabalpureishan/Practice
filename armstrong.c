#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int num,length,sum,rem;
    //printf("enter number:\n");
    scanf("%d",&num);
    length = floor(log10(num)+1);
    //printf("%d",num);
    //printf("%d",length);
    while(num>0){
        rem = num%10;
        num = num/10;
        //printf("%d",num);
        sum += pow(rem,length);
    }
    if(sum==num){
        printf("Number is armstrong");

    }else{
        printf("Number is not armstrong");
    }

}
