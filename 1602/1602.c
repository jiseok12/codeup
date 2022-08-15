#include<stdio.h>

float ABS(float a){
    return a<0?-a:a;
}

int main(){
    float a;
    int b,c;
    scanf("%f",&a);
    b=(int)a;
    if(b==a){
    printf("%.0f",ABS(a));
    }
    else{
    printf("%g",ABS(a));
    }
}
