#include<stdio.h>

char a[22];

int f(int i){
    if(a[i]=='\0') return 0;
    return f(i+1)+(a[i]-'0');
}

int main(){
    scanf("%s", a);
    printf("%d",f(0));
    return 0;
}
