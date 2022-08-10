#include<stdio.h>

int main(){
    int a[8]={0,};
    int count=1,b=0,c;

    for(int i=1;i<=7;i++){
        scanf("%d",&a[i]);
    }

    for(int j=1;j<=7;j++){
        for(int i=1;i<=7;i++){
            if(a[j]<a[i])
                count++;
        }
        if(count==1)
            c=a[j];
        if(count==2)
            b=a[j];

        count=1;
    }
    if(b==0)
        b=c;
    printf("%d\n%d",c,b);
    return 0;
}
