#include<stdio.h>

int main(){
    char a[1000]="";
    int count=0;
    fgets(a,100, stdin);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='l'&&a[i+1]=='o'&&a[i+2]=='v'&&a[i+3]=='e') count++;
    }

    printf("%d",count);
    return 0;
}
