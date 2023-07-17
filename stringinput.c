#include <stdio.h>
int main(){
    char name[30];
    printf("enter your name:");
    fgets(name,sizeof(name),stdin);
    printf("your name is %s",name);
    return 0;
}