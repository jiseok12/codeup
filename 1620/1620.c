#include<stdio.h>

int main(){
    char a[10];
    int sum=0;
    scanf("%s",a);

    for(int i=0;a[i]!='\0';i++){
        sum=sum+a[i]-'0';
    }
    if(sum<=10) printf("%d",sum);
    else {
        for(sum;sum>=10;){
            sum=(sum%10)+(sum-sum%10)/10;
        }
        printf("%d",sum);
    }
}
