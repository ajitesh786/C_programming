#include<stdio.h>
int main() {
  int n;
  int i =1;
  while(i!=0) {
    printf("enter your number : ");
    scanf("%d",&n);
    int sum =0;
    sum = sum + n;
    printf("sum is : %d",sum);

  }
  return 0;
}