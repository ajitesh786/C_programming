#include<stdio.h>
int add(int ,int);
int fact(int n);
int main() {
int x,y,m;
printf("Enter x and y and m : ");
scanf("%d %d %d",&x,&y,&m);
int c = add(x,y);

printf("sum is : %d\n factoreal is %d\n",c,fact(m));

return 0;
}
int add(int a,int b){
    return a+b;
}
int fact(int n){
    if (n == 0)
    return 1;
    return n * fact(n-1);
}