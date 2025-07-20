#include<stdio.h>
#include<math.h>
int main() {
    int u,v,w,x,y;
    printf("Input Himanshu_Holidays: ");
    scanf("%d",&u);

    printf("Input Abhishek_Holidays: ");
    scanf("%d",&v);

    printf("Input Satendra_Holidays: ");
    scanf("%d",&w);

    printf("Input Gaurav_Holidays: ");
    scanf("%d",&x);

    printf("Input Akash Holidays: ");
    scanf("%d",&y);
    float Him_Salary = ((80.00*8/12) - (80.00/365)*u);
    float Abh_Salary = ((82.00*10/12) - (82.00/365)*v);
    float Sat_Salary = ((83.00*12/12 )-( 83.00/365)*w);
    float Gav_Salary = ((84.00*13/12) -( 84.00/365)*x);
    float akash_Salary = ((85.00*14/12) -(85.00/365)*y);
    printf("Him_Salary in LPA: %f\n",Him_Salary);
    printf("Abh_Salary in LPA:  %f\n",Abh_Salary);
    printf("Sat_Salary in LPA:  %f\n",Sat_Salary);
    printf("akash_Salary in LPA:  %f\n",akash_Salary);
    return 0;
}