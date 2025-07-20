#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
    if (a>0 && b>0 && c>0)
    {
        /* code */  if (a<b+c && b<c+a && c<a+b)
    {
        /* code */printf("Tiangle is valid\n");
    } else{
        printf("Triangle is not valid\n");
    }
    } else {
        printf("Triangle is not valid\n");
    }
    return 0;
  
    
}