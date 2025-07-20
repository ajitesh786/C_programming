#include<stdio.h>
int main() {
    int i,n,fact = 1,sum = 1;
    printf("Enter number : ");
    scanf("%d",&n);
  for(i = n;i>= 1;i--) {
     fact = fact * i;
  }
  int fact1  = 1;
  for(i = 1 ;i<=n ; i++) {
   sum = sum + (i/fact);
  }
}