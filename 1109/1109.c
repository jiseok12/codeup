#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    int age;
    char qntj;
    float privit;
}Stack;

int main(){
    Stack *s = (Stack*)malloc(sizeof(Stack));
    scanf("%s", s->name);
    scanf("%d\n", &s->age);
    scanf("%c\n", &s->qntj);
    scanf("%f", &s->privit);
    printf("%s\n", s->name);
    printf("%d\n", s->age);
    printf("%c\n", s->qntj);
    printf("%g", s->privit);
    return 0;
}
