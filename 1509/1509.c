#include<stdio.h>

int main(){
    int a[12][12]={0,};
    int count=0,b;

    for(int i=1;i<=11;i++){
        for(int j=1;j<=10;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=1;i<=10;i++){
        if(a[11][i]==1){
            for(int j=10;j>=1;j--){
                if(a[j][i]>0){
                    printf("%d crash\n",i);
                    break;
                }
                else if(a[j][i]<0){
                    printf("%d fall\n",i);
                    break;
                }
                count++;
            }
            if(count==10) {
                printf("%d safe\n",i);
            }
            count=0;
        }
    }
    return 0;
}
