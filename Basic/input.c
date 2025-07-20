// 
#include<stdio.h>
void printTable(int n);
int main() {
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    printTable(n);
 //   printf("Table is : %d",printTable(n));
    return 0;
}
void printTable(int n) {
    for (int i=1;i<=10 ; i++) {
     printf("%d \n",i*n);
    // return i*n;
    }
    
}