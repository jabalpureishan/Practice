#include <stdio.h>
int main(){
    int x;
    printf("\ngive int input: \n");
    scanf("%i",&x);
    printf("\ngiven int input: %i",x);
    char y;
    printf("\ngive char input: \n");
    scanf("%c",&y);
    printf("\ngiven char input: %c",y);
    char a[30];
    printf("\ngive string input: \n");
    scanf(" %[^\n]%*c",a);
    printf("\ngiven string input: %s",a);
    float f;
    printf("\ngive float input: \n");
    scanf("%f",&f);
    printf("\ngiven float input: %f",f);
    return 0;
}