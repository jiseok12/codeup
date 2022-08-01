#include<stdio.h>

int main(){
    int a;
    int si[10001]={0,};

    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&si[i]);
    }
    for(int i=1;i<=a;i++){
        printf("%d: ",i);
        for(int j=1;j<=a;j++){
            if(i!=j&&si[i]>si[j]){
                printf("> ");
            }
            else if(i!=j&&si[i]<si[j]){
                printf("< ");
            }
            else if(i!=j&&si[i]==si[j]){
                printf("= ");
            }
        }
        printf("\n");
    }
    return 0;
}
