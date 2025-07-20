#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    printf("Enter str : ");
    gets(str);
    for( int i = 0; str[i] != '\0';i++){
    if(str[i] >= 'A' && str[i] <= 'Z') {
        str[i] = str[i] + 32;

    }

    }
    printf("Str is : %s\n",str);
    return 0;

}