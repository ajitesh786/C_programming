# include<stdio.h>
void swap(int *a,int *b);
int main() {
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a is %d\nb is %d\n",a,b);
    return 0;
}
void swap(int *a,int *b) {
    int t = *a;
       *a = *b;
       *b = t;
       
}