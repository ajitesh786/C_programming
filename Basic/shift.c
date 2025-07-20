#include<stdio.h>
void Table() ;
  int main() {
    Table();
    return 0;
  }
  void Table() {
    printf("Table is : \n");
    for(int i= 1; i<=10; i++) {
      printf("%d\n",i);
    }
  }