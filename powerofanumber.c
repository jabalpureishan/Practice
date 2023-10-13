#include <stdio.h>
#include <math.h>

int main(){
    int base,power,result;
    printf("Enter base:\n");
    scanf("%d",&base);
    printf("Enter power:\n");
    scanf("%d",&power);
    result = pow(base,power);
    printf("answer using inbuilt function:%d\n",result);
    int ans = base;
    for(int i=2;i<=power;i++){
        ans = ans*base;
    }
    printf("answer without using inbuilt function:%d\n",ans);
    return 0;
}