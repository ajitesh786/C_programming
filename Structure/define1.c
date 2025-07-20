#include<stdio.h>
#include<string.h>
int main() {
    struct student
    {
     double roll_no;
      int marks;
      char name[15]; /* data */
    };
    struct student s1 ;
    s1.marks = 90;
    
    s1.roll_no=240840100006;
    strcpy(s1.name,"Ajitesh Kumar");
    printf("Details of s1 is : %d %zu %s",s1.marks,s1.roll_no,s1.name);
    return 0;
    
    
}