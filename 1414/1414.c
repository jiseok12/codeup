#include<stdio.h>

int main(){
    char a[101]="";
    int count=0;

    scanf("%s",a);

    for(int i=0; a[i]!='\0' ;i++){
        if(a[i]=='c'||a[i]=='C')count++;
    }
    printf("%d\n",count);

    count=0;
    for(int i=0;a[i]!='\0';i++){
        if((a[i-1]=='c'||a[i-1]=='C')&&(a[i]=='c'||a[i]=='C'))count++;
    }
    printf("%d",count);
    return 0;
}
