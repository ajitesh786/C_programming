#include<stdio.h>
int main() {
    struct student
    {
       int roll_no;
       char name[15];
       float marks; /* data */
    }arr[3];
    for(int i = 0;i<3;i++) {
        printf("Enter for student %d\n",i);
        scanf("%d %s %f",&arr[i].roll_no,&arr[i].name,&arr->marks);
    }
    for(int i = 0;i<3;i++) {
        printf("For student %d\n",i);
        printf("%d\n %s\n %.2f\n",arr[i].roll_no,arr[i].name,arr[i].marks);

    }
    return 0;
}