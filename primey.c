#include <stdio.h>
#include <stdbool.h>

bool isprime(int num){
    if(num==1){
        return false;
    }
    if(num==2 || num==3){
        return true;
    }
    if(num%3==0 || num%2==0){
        return false;
    }
    int i=5;
    while(i*i<=num){
        if(num%i==0 || num%(i+2)==0){
            return false;
        }
        i += 1;
    }
    return true;
}

int main(){
    for(int i=2;i<=30;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}