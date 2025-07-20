#include<stdio.h>
# include<math.h>
int main() {
int n,rem,deg = 0;
double Armstrong = 0 ;
printf("Enter number to check Armstrong or not.\n");
scanf("%d",&n);
if(n<= 0) {
    printf("%d is not a valid input.\n",n);
    return 1;
}
int temp = n;
while(temp>0) {
  temp = temp/10;
   deg ++;
}

temp = n;
while( temp>0) {
    rem = temp % 10;
    temp = temp / 10;
    Armstrong = Armstrong + pow(rem,deg);
}

if((int)Armstrong == n) {
    printf("%d is a Armstrong number.\n",n);
} else 
printf("%d is not a Armstrong number.\n",n);

}