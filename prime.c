#include <stdio.h>
#include <stdbool.h>
int main(){
    bool isPrime = true;
    int num,i;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        printf("Number is Prime");
    }else{
        printf("not prime");
    }
    return 0;
}