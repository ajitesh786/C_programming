#include<stdio.h>
int main() {
    int x = 50;
    switch(x) {
     case 10: printf("A");
     break;
     case 'a': printf("B");
     break;
     case 5 : printf("C");
     break;
     default : printf("Goodbye");
    }
    return 0;
}