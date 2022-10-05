#include<stdio.h>

int f(int n){
    if(n<=1){
        printf("%d\n",n);
        return 1;
    }
    n%2?f(n*3+1):f(n/2);
    printf("%d\n",n);
}

int main(){
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}
