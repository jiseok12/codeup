#include<stdio.h>

int main(){
    char a[11]="";
    int poin[11]={0,};
    int count=0;
    scanf("%s",a);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='t'){
            printf("%d ",i+1);
        }
    }
    return 0;
}
