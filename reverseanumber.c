#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int num,rem;
    int ans = 0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int power = floor(log10(num)+1)-1;
    //printf("power:%d",power);
    while(num>0){
        rem = num%10;
        num = num/10;
        ans += rem*pow(10,power);
        power -= 1;
    }
    printf("reversed:%d",ans);

    return 0;
}