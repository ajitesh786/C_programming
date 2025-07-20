#include<stdio.h>
int main() {
    int ram,shyam,ajay;
    printf("Enter age of ram,shyam and ajay : ");
    scanf("%d %d %d",&ram,&shyam,&ajay);
   
    if(shyam>ram && ajay){
    
        printf("Shyam is the youngest\n");
    }else if(ajay>ram && ajay >shyam) {
        printf("Ajay is the youngest\n");
    }else if(ram>shyam && ram>ajay) {
        printf("Ram is the youngest\n");
    }
    return 0;
}