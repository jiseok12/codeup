#include<stdio.h>

int main(){
    int b,sum,c;
    scanf("%d %d",&b,&c);
    sum=b;
    for(int a=1;a<c;a++){
        b=b*sum;
    }
    if(c==0) printf("1");
    else printf("%d",b);
    return 0;
}
