#include<stdio.h>

int f(int n){
    printf("%d\n",n);
    if(n<=1)
        return 1;
    return n=n%2?f(n*3+1):f(n/2);
}

int main(){
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}
