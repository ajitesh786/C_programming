#include<stdio.h>
int main() {
  int n;
  printf("enter n : ");
  scanf("%d",&n);
  for(int i=1;i<=n; i++) {
    if (i%2==0)
    {
        /* code */printf("%d\n",i*i);
    }
    
  } 
  return 0;
}