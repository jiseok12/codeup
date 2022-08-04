#include<stdio.h>

int main(){
    int a,count=1;
    int sum[101][101]={0,};
    int sum2=0;

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            sum[i][j]=count++;
        }
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j==1||i==1||i==a||j==a)
                sum2=sum2+sum[i][j];
        }
    }
    printf("%d",sum2);
    return 0;
}
