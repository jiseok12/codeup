#include<stdio.h>

int main(){
    float a,b;
    double vysum=0;
    double sum=0;

    scanf("%f %f",&a ,&b);

    vysum=(a-100)*0.9;
    sum=(b-vysum)*100.0/vysum;
    printf("%f",sum);
    if(sum<=10.001) printf("����");
    else if(sum>10.001 && sum<=20) printf("��ü��");
    else printf("��");
    return 0;
}
