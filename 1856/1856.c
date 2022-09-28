#include<stdio.h>

int n[1000]={0,1,2,4,};

int f(int k){
    if(n[k]) return n[k];
    return f(k-1)+f(k-2)+f(k-3);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}
