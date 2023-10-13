#include <stdio.h>

void factors(int num){
    int i = 1;
    while(i*i<=num){
        if(num%i==0){
            printf("%d ",i);
            if(i!=(num/i)){
                printf("%d ",num/i);
            }
        i += 1;
        }
    }
}
int main(){
    factors(30);
    return 0;
}