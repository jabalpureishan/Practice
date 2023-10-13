#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    if((a>b) && (a>c)){
        printf("first num is largest");
    } 
    else if((b>a) && (b>c)){
        printf("second num is largest");
    } 
    else{
        printf("third num is largest");
    }
    return 0;
}