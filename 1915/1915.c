#include<stdio.h>

long long int f(int n) // 15
{
  if(n<=1) return n;
  return (f(n-1)+f(n-2))%10009;
}

int main()
{
  int k;
  scanf("%d", &k);
  printf("%lld\n", f(k));
  return 0;
}
