// 

#include<stdio.h>
void namaste();
void bonjour();
int main() {
    char ch;
    printf("enter f for french and i for indian : ");
    scanf("%c",&ch);
    
    if (ch== 'i')
    {
        /* code */ namaste();
    }
   
    
}
void namaste() {
    printf("Namaste\n");
    bonjour();
}
void bonjour() {
    printf("Bonjour\n");
}