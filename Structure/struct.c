#include<stdio.h>
int main() {
    struct  student
    {
     int roll_no;
     char name[15];
     int marks;   /* data */
    }s2 = {24084105,"Aman",89},s3,s4;
    struct student s1 = { 240841,"Ajitesh Kumar",80};
    s3.roll_no = 240884;
    //s3.name = "Ajitesh";
    strcpy(s3.name,"Ajitesh");
    printf("for ajitesh\n");
    printf("%d\n",s1.marks);
    printf("%s\n",s1.name);
    printf("%d\n",s1.marks);
    printf("for aman\n");
    printf("%d\n",s2.roll_no);
    printf("%s\n",s2.name);
    printf("%d\n",s2.marks);
    scanf("%s",&s4.name);
    return 0;
    
}