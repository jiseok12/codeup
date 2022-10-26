#include<stdio.h>
int f(int a,int b,int c){
    if(a==b) return 0;
    if(b+1==c){
        printf("\n");
        f(a,b+1,0);
    }
    else{
        printf("*");
        f(a,b,c+1);
    }
}

int main(){
    int a;
    scanf("%d",&a);
    f(a,0,0);
    return 0;
}
