#include<stdio.h>
int main() {
    int u,v,w,x,y;
    printf("enter u : ");
    scanf("%d",&u);
    printf("enter v : ");
    scanf("%d",&v);
    printf("enter w : ");
    scanf("%d",&w);
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter y : ");
    scanf("%d",&y);
    int sum;
    if (u%2==0)
    {
        /* code */ sum = v+w+x+y;
    } else if (v%2==0)
    {
        /* code */sum =  u+w+x+y;

    } else if (w%2==0)
    {
        /* code */sum =  u+v+x+y;
    } else if (x%2==0)
    {
        /* code */sum =  u+v+w+y;
    } else if (y%2==0)
    {
        /* code */sum =  u+v+w+x;
    } else {
        sum =  u+v+w+x+y;
    }
    printf("Sum is : %d",sum);
 return 0;
    
    
    
    
}