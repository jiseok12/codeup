#include <stdio.h>

int n;

long long int d[110];

long long int f(){
    long long int min=d[1];
    for(long long int i=2;i<=n;i++){
        if(d[i]<min){
            min=d[i];
        }
    }
    return min;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
