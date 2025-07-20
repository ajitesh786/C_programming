#include<stdio.h>
#include<string.h>
int main() {
    struct student
    {
       int roll_no;
       char name[15];
       int marks; /* data */
    } s2,s3 = {24084104,"Aditya",89},s4;
    
    struct student s1 = {24084103,"Abhishek",90};
    printf("Rohit\n");
    scanf("%d",&s2.roll_no);
    scanf("%s",&s2.name);
    scanf("%d",&s2.marks);

    s4.roll_no = 24058;
    strcpy(s4.name,"Dj");
    s4.marks = 92;
    printf("s1");
     printf("roll_No: %d\n",s1.roll_no);
      printf("Name%s\n",s1.name);
       printf("marks%d\n",s1.marks);
        printf("s2");
         printf("Roll_no: %d\n",s2.roll_no);
          printf("name %s\n",s2.name);
           printf("marks : %d\n",s2.marks);
            printf("s3\n");
             printf("%d\n",s3.roll_no);
     printf("name%s\n",s3.name);
      printf("%d\n",s3.marks);
     return 0;
}