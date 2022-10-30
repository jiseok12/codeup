#include<stdio.h>

typedef struct{
    char std[1000];
    int score;
}Student;
int main(){
    Student st[100];
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        scanf("%s %d", st[i].std, &st[i].score);
    }

    int max=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            if(st[max].score<st[j].score&&st[j].score!=-1){
                max=j;
            }
        }
        printf("%s\n",st[max].std);
        st[max].score=-1;
        max=0;
    }
}
