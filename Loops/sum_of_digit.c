#include<stdio.h>
int main(){
int n,sum = 0,rem =  0;
printf("Enter a number : ");
scanf("%d",&n);
while(n>0) {
     rem = n % 10;
    n = n/ 10;
    sum = sum + rem;

}
printf("sum of digits is : %d\n",sum);
return 0;
}