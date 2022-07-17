#include<stdio.h>

int main(){
    int b,c;
    int count=0;

    scanf("%d", &b);
    for(int a=1;a<=b;a++){
        if(b%a==0)count++;
    }

    if(count<=2)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
