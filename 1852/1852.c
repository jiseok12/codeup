#include<stdio.h>

void f(int k){
    if(k<=0) return;
    f(k-1);
    printf("%d ",k);
}

int main(){
    int a;
    scanf("%d",&a);
    f(a);
    printf("\n");
    return 0;
}
