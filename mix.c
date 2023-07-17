#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("quotient : %d remainder : %d multipliction : %d",(x/y),(x%y),(x*y));
    x  = x+ y;
    y = x - y;
    x = x - y;
    printf("\nafter swap: x:%d y:%d",x,y);
    int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));
    return 0;
}