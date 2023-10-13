#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    printf("Enter character:\n");
    scanf("%c",&c);
    if(c=="A" ||c=="a" ||c=="E" ||c=="e" ||c=="I" ||c=="i" ||c=="O" ||c=="o" ||c=="U" ||c=="u"){
        printf("Entered character is a vowel");
    } else {
        printf("Entered character is a consonant");
    }

    return 0;
}