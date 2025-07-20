#include<stdio.h>
int main() {
    int a;
    struct student
    {
       int roll_no;
       int marks;
       char name[15];
        /* data */
    };

   struct student s1,s2;

   struct Kishan
   {
    int roll_no;
    char name[15];
    int money;
    /* data */
   }A = {240846,"Keen",3500};
   // Initialisation;
   // Method 1;
   struct student s1 = {240841,50,"Ajitesh Kumar"};
   printf("%d\n",s1.marks);
   printf("%c\n",s1.name);
   printf("%%d\n",s1.marks);
   return 0;
    
}