#include<stdio.h>
#include <math.h>
int main() {
    int Days,Years,Weeks,Day;
    printf("Write no of days: ");
    scanf("%d",&Days);
    Years = Days/365;
    Weeks = Days%365/7;
    Day = Days%365%7;
    printf("No of years: %d\n",Years);
    printf("No of weeks: %d\n",Weeks);
    printf("No of days: %d\n",Day);
    return 0;
}
