#include<stdio.h>

int main(){
    int a,count=1;
    int b[2][101]={0,};
    int c[2][101]={0,};

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        scanf("%d %d",&b[0][i],&b[1][i]);
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(b[0][i]>b[0][j]){
                count++;
            }
        }
        c[0][count]=b[0][i];
        c[1][count]=b[1][i];
        count=1;
    }

    for(int i=1;i<=a;i++){
        printf("%d %d\n",c[0][i],c[1][i]);
    }

    return 0;
}

