#include<stdio.h>

int main(){
    int a,b;
    int c[101][101]={0,};
    scanf("%d %d",&a,&b);

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            scanf("%d",&c[i][j]);
        }
    }

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
