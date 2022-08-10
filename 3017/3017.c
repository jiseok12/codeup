#include <stdio.h>

int main() {
    int a,b[4][2001]={0,},d,count=1;
    int c[4][2001]={0,};

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        scanf("%d %d",&b[1][i],&b[2][i]);
        b[0][i]=count++;
    }

    count=1;

    for(int j=1;j<=a;j++){
        for(int i=1;i<=a;i++){
            if(b[1][j]<b[1][i]&&i!=j){
                count++;
            }
            else if(b[1][j]==b[1][i]&&i!=j){
                if(b[2][j]<b[2][i]){
                    count++;
                }
                else if(b[2][j]==b[2][i]){
                    if(b[0][j]>b[0][i]){
                        count++;
                    }
                }
            }
        }
        c[0][count]=b[0][j];
        c[1][count]=b[1][j];
        c[2][count]=b[2][j];
        count=1;
    }


    for(int i=1;i<=a;i++){
        printf("%d %d %d\n", c[0][i], c[1][i], c[2][i]);
    }
    return 0;
}
