#include<stdio.h>
int main() {
    char str1[] = "Ajitesh";
    char str2[] = "Ajitrms";
    int count = 0;
    for(int i =  0; str1[i] != '\0' || str2 != '\0';i++) {
     if(str1[i] != str2[i]) {
        count = 1;
        break;
     }
    }
    if(count == 1)
    printf("Str are  not equals.\n");
    else
    printf("str are equals.\n");
    return 0;

}