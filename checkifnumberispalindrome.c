#include <stdio.h>
#include <math.h>
int main(){
    int num,dupl = 0,temp,rem,length;
    printf("Enter a numeber:\n");
    scanf("%d",&num);
    length = floor(log10(num)+1) - 1;
    float sec = (float)num;
    printf("float: %.3f",sec);
    temp = num;
    while(num>0){
        rem = num%10;
        num = num/10;
        dupl += rem*pow(10,length);
        length -= 1;
    }
    printf("dupl:%d",dupl);
    if(dupl==temp){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }

}