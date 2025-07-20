#include<stdio.h>
int fact(int n);
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n<0){
        printf("factorial is not defined for negative number\n");
        return 1;
    }
    
    int result = fact(n);
    printf("factorial is : %d",result);
    return 0;
}
int fact(int n) {
    int factNm;
    if(n==0){
        return 1;
    }
    factNm = n  * fact(n-1);
    return  factNm;

}